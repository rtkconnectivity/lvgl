/**
 * @file lv_draw_ppe_img.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_draw_private.h"
#if LV_USE_DRAW_PPE_RTL8773G
#include "arm_mve.h"
#include "../../../misc/lv_area_private.h"
#include "../../sw/blend/lv_draw_sw_blend_private.h"
#include "../../lv_image_decoder_private.h"
#include "../../lv_draw_image_private.h"
#include "../../../display/lv_display.h"
#include "../../../display/lv_display_private.h"
#include "../../../misc/lv_log.h"
#include "../../../core/lv_refr_private.h"
#include "../../../stdlib/lv_mem.h"
#include "../../../misc/lv_math.h"
#include "../../../misc/lv_color.h"
#include "../../../stdlib/lv_string.h"
#include "../../../core/lv_global.h"
#include "../../../draw/lv_image_decoder.h"

#include "lv_ppe_rtl8773g_utils.h"
#include "rtl_idu.h"
#include "string.h"

/*********************
 *      DEFINES
 *********************/
#define ROUND_UP_8(x) (((x) + 7) & ~7)
/**********************
 *      TYPEDEFS
 **********************/
typedef struct
{
    int16_t iX;
    int16_t iY;
} arm2d_local_location_t;

typedef struct
{
    int16_t iWidth;
    int16_t iHeight;
} arm2d_local_size;

typedef struct arm2d_local_region_t
{
    arm2d_local_location_t tLocation;
    arm2d_local_size tSize;
} arm2d_local_region_t;

typedef struct arm2d_local_scratch_mem_t
{
    union
    {
        struct
        {
            uint32_t u24SizeInByte      : 24;                                       //!< the memory size in Byte
uint32_t u2ItemSize         :
            3;                                        //!< the size of the data item
            uint32_t u2Align            : 3;                                        //!< the alignment
uint32_t u2Type             :
            2;                                        //!< The memory type define in enum arm_2d_mem_type_t
        };
        uint32_t Value;                                                             //!< Memory Information
    } tInfo;

    uintptr_t pBuffer;
} arm2d_local_scratch_mem_t;

typedef struct arm2d_local_filter_iir_blur_descriptor_t
{
    union
    {
        uint8_t chBlurMode;
        struct
        {
            uint8_t bForwardHorizontal  : 1;
            uint8_t bForwardVertical    : 1;
            uint8_t bReverseHorizontal  : 1;
            uint8_t bReverseVertical    : 1;
        };
    };

    uint8_t chBlurDegree;
    arm2d_local_scratch_mem_t tScratchMemory;

} arm2d_local_filter_iir_blur_descriptor_t;

typedef struct arm2d_color_cccn888_t
{
    uint16_t hwB;
    uint16_t hwG;
    uint16_t hwR;
} arm2d_color_cccn888_t;

typedef arm2d_color_cccn888_t arm2d_color_rgb565_t;
/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
static inline void arm2d_local_rgb565_unpack_single_vec(uint16x8_t in,
                                                        uint16x8_t *R, uint16x8_t *G, uint16x8_t *B)
{
    in = vbrsrq_n_u16(in, 16);

    uint16x8_t vecMaskB = vdupq_n_u16(0xF800);
    uint16x8_t vecMaskG = vdupq_n_u16(0x003F << 5);

    uint16x8_t tB = (uint16x8_t)vshrq_n_s8((int8x16_t)(in & vecMaskB), 3);
    uint16x8_t tR = (uint16x8_t)vshrq_n_s8((int8x16_t)(in << 11), 3);
    uint16x8_t tG = (uint16x8_t)vshrq_n_s8((int8x16_t)((in & vecMaskG) << 5), 2);

    *B = vbrsrq_n_u16(tB, 16);
    *R = vbrsrq_n_u16(tR, 16);
    *G = vbrsrq_n_u16(tG, 16);
}

static inline uint16x8_t arm2d_local_rgb565_pack_single_vec(uint16x8_t R, uint16x8_t G,
                                                            uint16x8_t B)
{
    uint16x8_t      vecMaskRpck = vdupq_n_u16(0x00f8);
    uint16x8_t      vecMaskGpck = vdupq_n_u16(0x00fc);

    uint16x8_t      vOut = vorrq_u16(vshrq_n_u16(B, 3),
                                     vmulq_n_u16(vandq_u16(G, vecMaskGpck), 8));

    vOut = vorrq_u16(vOut, vmulq_n_u16(vandq_u16(R, vecMaskRpck), 256));

    return vOut;
}

void arm2d_local_rgb565_filter_iir_blur_mve(
    uint16_t *__restrict phwTarget,
    int16_t iTargetStride,
    arm2d_local_region_t *__restrict ptValidRegionOnVirtualScreen,
    arm2d_local_region_t *ptTargetRegionOnVirtualScreen,
    uint8_t chBlurDegree,
    arm2d_local_filter_iir_blur_descriptor_t *ptThis)
{
    arm2d_local_scratch_mem_t *ptScratchMemory = &ptThis->tScratchMemory;
    int_fast16_t    iWidth = ptValidRegionOnVirtualScreen->tSize.iWidth;
    int_fast16_t    iHeight = ptValidRegionOnVirtualScreen->tSize.iHeight;

    if (0 == chBlurDegree)
    {
        return ;
    }

    int32_t         iY, iX;
    /* pre-scaled ratio to take into account doubling + high-part extraction of vqdmulhq */
    int16_t        hwRatio = (256 - chBlurDegree) << 7;

    arm2d_color_rgb565_t *ptStatusH = NULL;
    arm2d_color_rgb565_t *ptStatusV = NULL;

    int16_t       *pAccBase = NULL;
    int16x8_t      vaccR, vaccG, vaccB;

    if (NULL != (void *)(ptScratchMemory->pBuffer))
    {
        ptStatusH = (arm2d_color_rgb565_t *) ptScratchMemory->pBuffer;
        ptStatusV = ptStatusH + ROUND_UP_8(ptTargetRegionOnVirtualScreen->tSize.iWidth);
    }

    /* calculate the offset between the target region and the valid region */
    arm2d_local_location_t tOffset =
    {
        .iX = ptValidRegionOnVirtualScreen->tLocation.iX - ptTargetRegionOnVirtualScreen->tLocation.iX,
        .iY = ptValidRegionOnVirtualScreen->tLocation.iY - ptTargetRegionOnVirtualScreen->tLocation.iY,
    };


    /* left to right, top to down process */
    if (ptThis->bForwardHorizontal)
    {
        uint16_t *phwPixel = phwTarget;
        if (NULL != ptStatusV)
        {
            /* rows direct path */
            ptStatusV += tOffset.iY;
        }

        uint16x8_t      vstride = vidupq_n_u16(0, 1);
        vstride = vstride * iTargetStride;

        for (iY = 0; iY < iHeight / 8; iY++)
        {
            uint16x8_t      voffs = vstride;

            if (NULL != ptStatusV && tOffset.iX > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusV;
                vaccR = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccB = vld1q_s16(pAccBase + 16);
            }
            else
            {
                uint16x8_t       vacc = vldrhq_gather_shifted_offset_u16(phwPixel, voffs);
                arm2d_local_rgb565_unpack_single_vec(vacc, (uint16x8_t *)&vaccR, (uint16x8_t *)&vaccG,
                                                     (uint16x8_t *)&vaccB);
            }

            for (iX = 0; iX < iWidth; iX++)
            {
                uint16x8_t      in = vldrhq_gather_shifted_offset_u16(phwPixel, voffs);
                uint16x8_t      vR, vG, vB;

                arm2d_local_rgb565_unpack_single_vec(in, &vR, &vG, &vB);

                int16x8_t       vdiffR = vsubq_s16((int16x8_t)vR, vaccR);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)vG, vaccG);
                int16x8_t       vdiffB = vsubq_s16((int16x8_t)vB, vaccB);

                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);

                vstrhq_scatter_shifted_offset_u16(phwPixel, voffs,
                                                  arm2d_local_rgb565_pack_single_vec((uint16x8_t)vaccR, (uint16x8_t)vaccG,
                                                                                     (uint16x8_t)vaccB));
                voffs += 1;
            }

            if (NULL != ptStatusV)
            {
                /* save the last pixels */
                pAccBase = (int16_t *) ptStatusV;
                vst1q_s16(pAccBase, vaccR);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccB);
                ptStatusV += 8;
            }

            phwPixel += (iTargetStride * 8);
        }

        if (iHeight & 7)
        {
            uint16x8_t      voffs = vstride;
            mve_pred16_t    tailPred = vctp16q(iHeight & 7);

            if (NULL != ptStatusV && tOffset.iX > 0)
            {
                /* recover the previous values */
                pAccBase = (int16_t *) ptStatusV;
                vaccR = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccB = vld1q_s16(pAccBase + 16);

            }
            else
            {
                uint16x8_t       vacc = vldrhq_gather_shifted_offset_u16(phwPixel, voffs);

                arm2d_local_rgb565_unpack_single_vec(vacc, (uint16x8_t *)&vaccR, (uint16x8_t *)&vaccG,
                                                     (uint16x8_t *)&vaccB);
            }


            for (iX = 0; iX < iWidth; iX++)
            {
                uint16x8_t      in = vldrhq_gather_shifted_offset_u16(phwPixel, voffs);
                uint16x8_t      vR, vG, vB;

                arm2d_local_rgb565_unpack_single_vec(in, &vR, &vG, &vB);

                int16x8_t       vdiffR = vsubq_s16((int16x8_t)vR, vaccR);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)vG, vaccG);
                int16x8_t       vdiffB = vsubq_s16((int16x8_t)vB, vaccB);

                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);

                vstrhq_scatter_shifted_offset_p_u16(phwPixel, voffs,
                                                    arm2d_local_rgb565_pack_single_vec((uint16x8_t)vaccR,
                                                                                       (uint16x8_t)vaccG, (uint16x8_t)vaccB), tailPred);
                voffs += 1;

            }
            if (NULL != ptStatusV)
            {
                /* save the last pixels */
                pAccBase = (int16_t *) ptStatusV;
                vst1q_s16(pAccBase, vaccR);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccB);
            }
        }
    }

    /* top to down, left to right */
    if (ptThis->bForwardVertical)
    {
        uint16_t *phwPixel = phwTarget;

        if (NULL != ptStatusH)
        {
            ptStatusH += tOffset.iX;
        }

        /* columns direct path */
        for (iX = 0; iX < iWidth / 8; iX++)
        {
            uint16_t       *phwChannel = phwPixel;

            if (NULL != ptStatusH && tOffset.iY > 0)
            {

                /* recover the previous values */
                pAccBase = (int16_t *) ptStatusH;
                vaccR = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccB = vld1q_s16(pAccBase + 16);
            }
            else
            {
                uint16x8_t       vacc = vldrhq_u16(phwChannel);
                arm2d_local_rgb565_unpack_single_vec(vacc, (uint16x8_t *)&vaccR, (uint16x8_t *)&vaccG,
                                                     (uint16x8_t *)&vaccB);
            }

            for (iY = 0; iY < iHeight; iY++)
            {

                uint16x8_t      in = vldrhq_u16(phwChannel);
                uint16x8_t      vR, vG, vB;

                arm2d_local_rgb565_unpack_single_vec(in, &vR, &vG, &vB);

                int16x8_t       vdiffR = vsubq_s16((int16x8_t)vR, vaccR);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)vG, vaccG);
                int16x8_t       vdiffB = vsubq_s16((int16x8_t)vB, vaccB);

                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);

                vstrhq_u16(phwChannel, arm2d_local_rgb565_pack_single_vec((uint16x8_t)vaccR, (uint16x8_t)vaccG,
                                                                          (uint16x8_t)vaccB));
                phwChannel += iTargetStride;
            }

            phwPixel += 8;

            if (NULL != ptStatusH)
            {
                /* save the last pixels */
                pAccBase = (int16_t *) ptStatusH;
                vst1q_s16(pAccBase, vaccR);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccB);
                ptStatusH += 8;
            }
        }


        if (iWidth & 7)
        {
            mve_pred16_t    tailPred = vctp16q(iWidth & 7);
            uint16_t       *phwChannel = phwPixel;

            if (NULL != ptStatusH && tOffset.iY > 0)
            {
                /* recover the previous values */
                pAccBase = (int16_t *) ptStatusH;
                vaccR = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccB = vld1q_s16(pAccBase + 16);
            }
            else
            {
                uint16x8_t       vacc = vldrhq_u16(phwChannel);
                arm2d_local_rgb565_unpack_single_vec(vacc, (uint16x8_t *)&vaccR, (uint16x8_t *)&vaccG,
                                                     (uint16x8_t *)&vaccB);
            }

            for (iY = 0; iY < iHeight; iY++)
            {
                uint16x8_t      in = vldrhq_u16(phwChannel);
                uint16x8_t      vR, vG, vB;

                arm2d_local_rgb565_unpack_single_vec(in, &vR, &vG, &vB);

                int16x8_t       vdiffR = vsubq_s16((int16x8_t)vR, vaccR);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)vG, vaccG);
                int16x8_t       vdiffB = vsubq_s16((int16x8_t)vB, vaccB);

                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);

                vstrhq_p_u16(phwChannel, arm2d_local_rgb565_pack_single_vec((uint16x8_t)vaccR, (uint16x8_t)vaccG,
                                                                            (uint16x8_t)vaccB), tailPred);
                phwChannel += iTargetStride;
            }
            if (NULL != ptStatusH)
            {
                /* save the last pixels */
                pAccBase = (int16_t *) ptStatusH;
                vst1q_s16(pAccBase, vaccR);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccB);
            }
        }
    }
}

void arm2d_local_argb8888_filter_iir_blur_mve(
    uint32_t *__restrict pwTarget,
    int16_t iTargetStride,
    arm2d_local_region_t *__restrict ptValidRegionOnVirtualScreen,
    arm2d_local_region_t *ptTargetRegionOnVirtualScreen,
    uint8_t chBlurDegree,
    arm2d_local_filter_iir_blur_descriptor_t *ptThis)
{
    arm2d_local_scratch_mem_t *ptScratchMemory = &ptThis->tScratchMemory;
    int_fast16_t    iWidth = ptValidRegionOnVirtualScreen->tSize.iWidth;
    int_fast16_t    iHeight = ptValidRegionOnVirtualScreen->tSize.iHeight;

    if (0 == chBlurDegree)
    {
        return ;
    }

    int32_t         iY, iX;
    /* pre-scaled ratio to take into account doubling + high-part extraction of vqdmulhq */
    int16_t         hwRatio = (256 - chBlurDegree) << 7;
    arm2d_color_cccn888_t       *ptStatusH = NULL;
    arm2d_color_cccn888_t       *ptStatusV = NULL;
    int16_t        *pAccBase = NULL;
    int16x8_t       vaccB, vaccG, vaccR;

    if (NULL != (void *)(ptScratchMemory->pBuffer))
    {
        ptStatusH = (arm2d_color_cccn888_t *) ptScratchMemory->pBuffer;
        ptStatusV = ptStatusH + ROUND_UP_8(ptTargetRegionOnVirtualScreen->tSize.iWidth);
    }

    /* calculate the offset between the target region and the valid region */
    arm2d_local_location_t tOffset =
    {
        .iX = ptValidRegionOnVirtualScreen->tLocation.iX - ptTargetRegionOnVirtualScreen->tLocation.iX,
        .iY = ptValidRegionOnVirtualScreen->tLocation.iY - ptTargetRegionOnVirtualScreen->tLocation.iY,
    };


    if (ptThis->bForwardHorizontal)
    {
        uint32_t *pwPixel = pwTarget;

        if (NULL != ptStatusV)
        {
            /* rows direct path */
            ptStatusV += tOffset.iY;
        }
        uint16x8_t vstride = vidupq_n_u16(0, 4);
        vstride = vstride * iTargetStride;

        for (iY = 0; iY < iHeight / 8; iY++)
        {
            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusV && tOffset.iX > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusV;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }


            for (iX = 0; iX < iWidth; iX++)
            {

                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);

                vstrbq_scatter_offset_u16(pchPixelB, vstride, (uint16x8_t)vaccB);
                vstrbq_scatter_offset_u16(pchPixelG, vstride, (uint16x8_t)vaccG);
                vstrbq_scatter_offset_u16(pchPixelR, vstride, (uint16x8_t)vaccR);

                pchPixelB += 4;
                pchPixelG += 4;
                pchPixelR += 4;
            }

            if (NULL != ptStatusV)
            {
                pAccBase = (int16_t *) ptStatusV;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);
                ptStatusV += 8;
            }

            pwPixel += (iTargetStride * 8);
        }

        if (iHeight & 7)
        {

            mve_pred16_t    tailPred = vctp16q(iHeight & 7);

            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusV && tOffset.iX > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusV;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }

            for (iX = 0; iX < iWidth; iX++)
            {

                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);


                vstrbq_scatter_offset_p_u16(pchPixelB, vstride, (uint16x8_t)vaccB, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelG, vstride, (uint16x8_t)vaccG, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelR, vstride, (uint16x8_t)vaccR, tailPred);

                pchPixelB += 4;
                pchPixelG += 4;
                pchPixelR += 4;
            }

            if (NULL != ptStatusV)
            {
                pAccBase = (int16_t *) ptStatusV;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);
            }
        }
    }

    if (ptThis->bForwardVertical)
    {
        uint32_t *pwPixel = pwTarget;

        if (NULL != ptStatusH)
        {
            ptStatusH += tOffset.iX;
        }

        uint16x8_t vstride = vidupq_n_u16(0, 4);

        /* columns direct path */
        for (iX = 0; iX < iWidth / 8; iX++)
        {

            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusH && tOffset.iY > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusH;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }

            for (iY = 0; iY < iHeight; iY++)
            {

                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);


                vstrbq_scatter_offset_u16(pchPixelB, vstride, (uint16x8_t)vaccB);
                vstrbq_scatter_offset_u16(pchPixelG, vstride, (uint16x8_t)vaccG);
                vstrbq_scatter_offset_u16(pchPixelR, vstride, (uint16x8_t)vaccR);

                pchPixelB += 4 * iTargetStride;
                pchPixelG += 4 * iTargetStride;
                pchPixelR += 4 * iTargetStride;

            }

            pwPixel += 8;

            if (NULL != ptStatusH)
            {
                pAccBase = (int16_t *) ptStatusH;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);

                ptStatusH += 8;
            }
        }

        if (iWidth & 7)
        {
            mve_pred16_t    tailPred = vctp16q(iWidth & 7);
            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusH && tOffset.iY > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusH;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }

            for (iY = 0; iY < iHeight; iY++)
            {
                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);


                vstrbq_scatter_offset_p_u16(pchPixelB, vstride, (uint16x8_t)vaccB, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelG, vstride, (uint16x8_t)vaccG, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelR, vstride, (uint16x8_t)vaccR, tailPred);

                pchPixelB += 4 * iTargetStride;
                pchPixelG += 4 * iTargetStride;
                pchPixelR += 4 * iTargetStride;
            }

            if (NULL != ptStatusH)
            {
                pAccBase = (int16_t *) ptStatusH;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);

            }
        }
    }
}

void arm2d_local_rgb888_filter_iir_blur_mve(
    uint32_t *__restrict pwTarget,
    int16_t iTargetStride,
    arm2d_local_region_t *__restrict ptValidRegionOnVirtualScreen,
    arm2d_local_region_t *ptTargetRegionOnVirtualScreen,
    uint8_t chBlurDegree,
    arm2d_local_filter_iir_blur_descriptor_t *ptThis)
{
    arm2d_local_scratch_mem_t *ptScratchMemory = &ptThis->tScratchMemory;
    int_fast16_t    iWidth = ptValidRegionOnVirtualScreen->tSize.iWidth;
    int_fast16_t    iHeight = ptValidRegionOnVirtualScreen->tSize.iHeight;

    if (0 == chBlurDegree)
    {
        return ;
    }

    int32_t         iY, iX;
    /* pre-scaled ratio to take into account doubling + high-part extraction of vqdmulhq */
    int16_t         hwRatio = (256 - chBlurDegree) << 7;
    arm2d_color_cccn888_t       *ptStatusH = NULL;
    arm2d_color_cccn888_t       *ptStatusV = NULL;
    int16_t        *pAccBase = NULL;
    int16x8_t       vaccB, vaccG, vaccR;

    if (NULL != (void *)(ptScratchMemory->pBuffer))
    {
        ptStatusH = (arm2d_color_cccn888_t *) ptScratchMemory->pBuffer;
        ptStatusV = ptStatusH + ROUND_UP_8(ptTargetRegionOnVirtualScreen->tSize.iWidth);
    }

    /* calculate the offset between the target region and the valid region */
    arm2d_local_location_t tOffset =
    {
        .iX = ptValidRegionOnVirtualScreen->tLocation.iX - ptTargetRegionOnVirtualScreen->tLocation.iX,
        .iY = ptValidRegionOnVirtualScreen->tLocation.iY - ptTargetRegionOnVirtualScreen->tLocation.iY,
    };


    if (ptThis->bForwardHorizontal)
    {
        uint8_t *pwPixel = (uint8_t *)pwTarget;

        if (NULL != ptStatusV)
        {
            /* rows direct path */
            ptStatusV += tOffset.iY;
        }
        uint16x8_t step = vidupq_n_u16(0, 1);
        uint16x8_t vstride = vmulq_n_u16(step, 3);
        vstride = vstride * iTargetStride;

        for (iY = 0; iY < iHeight / 8; iY++)
        {
            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusV && tOffset.iX > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusV;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }


            for (iX = 0; iX < iWidth; iX++)
            {

                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);

                vstrbq_scatter_offset_u16(pchPixelB, vstride, (uint16x8_t)vaccB);
                vstrbq_scatter_offset_u16(pchPixelG, vstride, (uint16x8_t)vaccG);
                vstrbq_scatter_offset_u16(pchPixelR, vstride, (uint16x8_t)vaccR);

                pchPixelB += 3;
                pchPixelG += 3;
                pchPixelR += 3;
            }

            if (NULL != ptStatusV)
            {
                pAccBase = (int16_t *) ptStatusV;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);
                ptStatusV += 8;
            }

            pwPixel += (iTargetStride * 24);
        }

        if (iHeight & 7)
        {

            mve_pred16_t    tailPred = vctp16q(iHeight & 7);

            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusV && tOffset.iX > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusV;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }

            for (iX = 0; iX < iWidth; iX++)
            {

                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);


                vstrbq_scatter_offset_p_u16(pchPixelB, vstride, (uint16x8_t)vaccB, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelG, vstride, (uint16x8_t)vaccG, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelR, vstride, (uint16x8_t)vaccR, tailPred);

                pchPixelB += 3;
                pchPixelG += 3;
                pchPixelR += 3;
            }

            if (NULL != ptStatusV)
            {
                pAccBase = (int16_t *) ptStatusV;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);
            }
        }
    }

    if (ptThis->bForwardVertical)
    {
        uint8_t *pwPixel = (uint8_t *)pwTarget;

        if (NULL != ptStatusH)
        {
            ptStatusH += tOffset.iX;
        }

        uint16x8_t step = vidupq_n_u16(0, 1);
        uint16x8_t vstride = vmulq_n_u16(step, 3);

        /* columns direct path */
        for (iX = 0; iX < iWidth / 8; iX++)
        {

            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusH && tOffset.iY > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusH;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }

            for (iY = 0; iY < iHeight; iY++)
            {

                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);


                vstrbq_scatter_offset_u16(pchPixelB, vstride, (uint16x8_t)vaccB);
                vstrbq_scatter_offset_u16(pchPixelG, vstride, (uint16x8_t)vaccG);
                vstrbq_scatter_offset_u16(pchPixelR, vstride, (uint16x8_t)vaccR);

                pchPixelB += 3 * iTargetStride;
                pchPixelG += 3 * iTargetStride;
                pchPixelR += 3 * iTargetStride;

            }

            pwPixel += 24;

            if (NULL != ptStatusH)
            {
                pAccBase = (int16_t *) ptStatusH;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);

                ptStatusH += 8;
            }
        }

        if (iWidth & 7)
        {
            mve_pred16_t    tailPred = vctp16q(iWidth & 7);
            uint8_t        *pchPixelB = (uint8_t *) pwPixel;
            uint8_t        *pchPixelG = pchPixelB + 1;
            uint8_t        *pchPixelR = pchPixelB + 2;

            if (NULL != ptStatusH && tOffset.iY > 0)
            {
                /* recover the previous accumulators */
                pAccBase = (int16_t *) ptStatusH;
                vaccB = vld1q_s16(pAccBase);
                vaccG = vld1q_s16(pAccBase + 8);
                vaccR = vld1q_s16(pAccBase + 16);
            }
            else
            {
                vaccB = (int16x8_t)vldrbq_gather_offset_u16(pchPixelB, vstride);
                vaccG = (int16x8_t)vldrbq_gather_offset_u16(pchPixelG, vstride);
                vaccR = (int16x8_t)vldrbq_gather_offset_u16(pchPixelR, vstride);
            }

            for (iY = 0; iY < iHeight; iY++)
            {
                uint16x8_t      inB = vldrbq_gather_offset_u16(pchPixelB, vstride);
                uint16x8_t      inG = vldrbq_gather_offset_u16(pchPixelG, vstride);
                uint16x8_t      inR = vldrbq_gather_offset_u16(pchPixelR, vstride);

                int16x8_t       vdiffB = vsubq_s16((int16x8_t)inB, vaccB);
                int16x8_t       vdiffG = vsubq_s16((int16x8_t)inG, vaccG);
                int16x8_t       vdiffR = vsubq_s16((int16x8_t)inR, vaccR);

                vaccB += vqdmulhq_n_s16(vdiffB, hwRatio);
                vaccG += vqdmulhq_n_s16(vdiffG, hwRatio);
                vaccR += vqdmulhq_n_s16(vdiffR, hwRatio);


                vstrbq_scatter_offset_p_u16(pchPixelB, vstride, (uint16x8_t)vaccB, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelG, vstride, (uint16x8_t)vaccG, tailPred);
                vstrbq_scatter_offset_p_u16(pchPixelR, vstride, (uint16x8_t)vaccR, tailPred);

                pchPixelB += 3 * iTargetStride;
                pchPixelG += 3 * iTargetStride;
                pchPixelR += 3 * iTargetStride;
            }

            if (NULL != ptStatusH)
            {
                pAccBase = (int16_t *) ptStatusH;
                vst1q_s16(pAccBase, vaccB);
                vst1q_s16(pAccBase + 8, vaccG);
                vst1q_s16(pAccBase + 16, vaccR);

            }
        }
    }
}

void mve_arm_2d_blur(lv_draw_buf_t *buf, uint8_t blur_degree)
{
    void *dst = buf->data;
    arm2d_local_region_t valid, target;
    valid.tLocation.iX = 0;
    valid.tLocation.iY = 0;
    valid.tSize.iWidth = buf->header.w;
    valid.tSize.iHeight = buf->header.h;
    target.tLocation.iX = 0;
    target.tLocation.iY = 0;
    target.tSize.iWidth = buf->header.w;
    target.tSize.iHeight = buf->header.h;
    arm2d_local_scratch_mem_t local_scratch_mem = {0};
    arm2d_local_filter_iir_blur_descriptor_t dsc = {0};
    dsc.tScratchMemory = local_scratch_mem;
    dsc.bForwardHorizontal = 1;
    dsc.bForwardVertical = 1;
    dsc.bReverseHorizontal = 0;
    dsc.bReverseVertical = 0;
    if (buf->header.cf == LV_COLOR_FORMAT_RGB565)
    {
        arm2d_local_rgb565_filter_iir_blur_mve((uint16_t *)dst, buf->header.stride / 2, &valid, &target,
                                               blur_degree,
                                               &dsc);
    }
    else if (buf->header.cf == LV_COLOR_FORMAT_ARGB8888)
    {
        arm2d_local_argb8888_filter_iir_blur_mve((uint32_t *)dst, buf->header.stride / 4, &valid, &target,
                                                 blur_degree,
                                                 &dsc);
    }
    else if (buf->header.cf == LV_COLOR_FORMAT_RGB888)
    {
        arm2d_local_rgb888_filter_iir_blur_mve((uint32_t *)dst, buf->header.stride / 3, &valid, &target,
                                               blur_degree,
                                               &dsc);
    }
}

#endif
