/**
 * @file lv_ppe_utils.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "../../../core/lv_refr.h"
#include "../../lv_draw_image_private.h"
#include "../../../misc/lv_area_private.h"
#include "../../lv_draw_private.h"
#if LV_USE_DRAW_PPE_RTL8773G
#include "lv_ppe_rtl8773g_utils.h"
#include "section.h"
#include "math.h"
#include "dma_channel.h"
#include "rtl876x_gdma.h"
#include "rtl_idu_int.h"
#include "string.h"

DSP_RAM_DATA_SECTION uint8_t cache_buffer[LV_PPE_MAX_BUFFER_SIZE];
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
static uint8_t high_speed_channel = 0xA5;
static uint8_t low_speed_channel = 0xA5;
static bool previous_cpu = false;
static bool previous_hw  = false;
/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

uint32_t lv_ppe_get_color(lv_color_t color, uint8_t opa)
{
    lv_color32_t ABGR8888_color;

    ABGR8888_color.alpha = opa;
    ABGR8888_color.blue = color.red;
    ABGR8888_color.green = color.green;
    ABGR8888_color.red = color.blue;

    return *(uint32_t *)&ABGR8888_color;
}

PPE_PIXEL_FORMAT lv_ppe_get_format(lv_color_format_t cf)
{
    switch (cf)
    {
    case LV_COLOR_FORMAT_RGB565:
        return PPE_RGB565;
    case LV_COLOR_FORMAT_ARGB8888:
        return PPE_ARGB8888;
    case LV_COLOR_FORMAT_RGB888:
        return PPE_RGB888;
    case LV_COLOR_FORMAT_XRGB8888:
        return PPE_XRGB8888;
    case LV_COLOR_FORMAT_ARGB8565:
        return PPE_ARGB8565;
    case LV_COLOR_FORMAT_ARGB1555:
        return PPE_ARGB1555;
    case LV_COLOR_FORMAT_ARGB4444:
        return PPE_ARGB4444;
    case LV_COLOR_FORMAT_ARGB2222:
        return PPE_ARGB2222;
    case LV_COLOR_FORMAT_A8:
        return PPE_A8;
    default:
        return PPE_FORMAT_NOT_SUPPORT;
    }
}

lv_area_t lv_ppe_get_matrix_area(ppe_matrix_t *matrix, const lv_area_t *coords,
                                 const lv_draw_image_dsc_t *draw_dsc)
{
    lv_area_t transform_area;
    ppe_get_identity(matrix);
    bool scale = (draw_dsc->scale_x != LV_SCALE_NONE || draw_dsc->scale_y != LV_SCALE_NONE);
    bool rotate = (draw_dsc->rotation != 0);
    bool skew = (draw_dsc->skew_x != 0 || draw_dsc->skew_y != 0);
    matrix->m[0][2] = coords->x1;
    matrix->m[1][2] = coords->y1;
    if (scale || rotate)
    {
        ppe_translate(draw_dsc->pivot.x, draw_dsc->pivot.y, matrix);
        if (rotate)
        {
            ppe_rotate(draw_dsc->rotation / 10.0f, matrix);    /* angle is 1/10 degree */
        }
        if (scale)
        {
            float scale_ratio_x = 1.0f * draw_dsc->scale_x / LV_SCALE_NONE;
            float scale_ratio_y = 1.0f * draw_dsc->scale_y / LV_SCALE_NONE;
            ppe_scale(scale_ratio_x, scale_ratio_y, matrix);
        }
        if (skew)
        {
            ppe_skew(draw_dsc->skew_x, draw_dsc->skew_y, matrix);
        }
        ppe_translate(-draw_dsc->pivot.x, -draw_dsc->pivot.y, matrix);
    }

    int32_t w = lv_area_get_width(coords);
    int32_t h = lv_area_get_height(coords);

    lv_image_buf_get_transformed_area(&transform_area, w, h, draw_dsc->rotation, draw_dsc->scale_x,
                                      draw_dsc->scale_y,
                                      &draw_dsc->pivot);

    transform_area.x1 += coords->x1;
    transform_area.y1 += coords->y1;
    transform_area.x2 += coords->x1;
    transform_area.y2 += coords->y1;
    return transform_area;
}

void lv_ppe_get_matrix(ppe_matrix_t *matrix, const lv_area_t *coords,
                       const lv_draw_image_dsc_t *draw_dsc)
{
    lv_area_t transform_area;
    ppe_get_identity(matrix);
    bool scale = (draw_dsc->scale_x != LV_SCALE_NONE || draw_dsc->scale_y != LV_SCALE_NONE);
    bool rotate = (draw_dsc->rotation != 0);
    bool skew = (draw_dsc->skew_x != 0 || draw_dsc->skew_y != 0);
    matrix->m[0][2] = coords->x1;
    matrix->m[1][2] = coords->y1;
    if (scale || rotate)
    {
        ppe_translate(draw_dsc->pivot.x, draw_dsc->pivot.y, matrix);
        if (rotate)
        {
            ppe_rotate(draw_dsc->rotation / 10.0f, matrix);    /* angle is 1/10 degree */
        }
        if (scale)
        {
            float scale_ratio_x = 1.0f * draw_dsc->scale_x / LV_SCALE_NONE;
            float scale_ratio_y = 1.0f * draw_dsc->scale_y / LV_SCALE_NONE;
            ppe_scale(scale_ratio_x, scale_ratio_y, matrix);
        }
        if (skew)
        {
            ppe_skew(draw_dsc->skew_x, draw_dsc->skew_y, matrix);
        }
        ppe_translate(-draw_dsc->pivot.x, -draw_dsc->pivot.y, matrix);
    }
}

void lv_ppe_get_inverse_matrix(ppe_matrix_t *matrix, const lv_area_t *coords,
                               const lv_draw_image_dsc_t *draw_dsc)
{
    lv_area_t transform_area;
    ppe_get_identity(matrix);
    bool scale = (draw_dsc->scale_x != LV_SCALE_NONE || draw_dsc->scale_y != LV_SCALE_NONE);
    bool rotate = (draw_dsc->rotation != 0);
    bool skew = (draw_dsc->skew_x != 0 || draw_dsc->skew_y != 0);
    if (scale || rotate || skew)
    {
        ppe_translate(draw_dsc->pivot.x, draw_dsc->pivot.y, matrix);
        if (rotate)
        {
            ppe_rotate(-draw_dsc->rotation / 10.0f, matrix);    /* angle is 1/10 degree */
        }
        if (scale)
        {
            float scale_ratio_x = 1.0f / (draw_dsc->scale_x * 1.0f / LV_SCALE_NONE);
            float scale_ratio_y = 1.0f / (draw_dsc->scale_y * 1.0f / LV_SCALE_NONE);
            ppe_scale(scale_ratio_x, scale_ratio_y, matrix);
        }
        if (skew)
        {
            ppe_skew(draw_dsc->skew_x, draw_dsc->skew_y, matrix);
        }
        ppe_translate(-draw_dsc->pivot.x, -draw_dsc->pivot.y, matrix);
    }
    ppe_translate(-coords->x1, -coords->y1, matrix);

}

uint8_t *lv_ppe_get_buffer(uint32_t size)
{
    return cache_buffer;
}

typedef struct
{
    float p[3];
} pox_t;

static void pos_transfer(ppe_matrix_t *matrix, pox_t *pox)
{
    float m_row0, m_row1, m_row2;

    float a = pox->p[0];
    float b = pox->p[1];
    float c = pox->p[2];

    /* Process all rows. */
    m_row0 = matrix->m[0][0];
    m_row1 = matrix->m[0][1];
    m_row2 = matrix->m[0][2];
    pox->p[0] = (m_row0 * a) + (m_row1 * b) + (m_row2 * c);

    m_row0 = matrix->m[1][0];
    m_row1 = matrix->m[1][1];
    m_row2 = matrix->m[1][2];
    pox->p[1] = (m_row0 * a) + (m_row1 * b) + (m_row2 * c);

    m_row0 = matrix->m[2][0];
    m_row1 = matrix->m[2][1];
    m_row2 = matrix->m[2][2];
    pox->p[2] = (m_row0 * a) + (m_row1 * b) + (m_row2 * c);

    pox->p[0] = pox->p[0] / pox->p[2];
    pox->p[1] = pox->p[1] / pox->p[2];
    pox->p[2] = 1;
}


bool lv_ppe_get_area(ppe_rect_t *result_rect, ppe_rect_t *source_rect, ppe_matrix_t *matrix)
{
    pox_t pox = {0.0f};
    float x_min = 0.0f;
    float x_max = 0.0f;
    float y_min = 0.0f;
    float y_max = 0.0f;

    pox.p[0] = source_rect->x1 * 1.0f;
    pox.p[1] = source_rect->y1 * 1.0f;
    pox.p[2] = 1.0f;
    pos_transfer(matrix, &pox);
    x_min = pox.p[0];
    x_max = pox.p[0];
    y_min = pox.p[1];
    y_max = pox.p[1];

    pox.p[0] = source_rect->x2 * 1.0f;
    pox.p[1] = source_rect->y1 * 1.0f;
    pox.p[2] = 1.0f;
    pos_transfer(matrix, &pox);
    if (x_min > pox.p[0])
    {
        x_min = pox.p[0];
    }
    if (x_max < pox.p[0])
    {
        x_max = pox.p[0];
    }
    if (y_min > pox.p[1])
    {
        y_min = pox.p[1];
    }
    if (y_max < pox.p[1])
    {
        y_max = pox.p[1];
    }

    pox.p[0] = source_rect->x1 * 1.0f;
    pox.p[1] = source_rect->y2 * 1.0f;
    pox.p[2] = 1.0f;
    pos_transfer(matrix, &pox);
    if (x_min > pox.p[0])
    {
        x_min = pox.p[0];
    }
    if (x_max < pox.p[0])
    {
        x_max = pox.p[0];
    }
    if (y_min > pox.p[1])
    {
        y_min = pox.p[1];
    }
    if (y_max < pox.p[1])
    {
        y_max = pox.p[1];
    }

    pox.p[0] = source_rect->x2 * 1.0f;
    pox.p[1] = source_rect->y2 * 1.0f;
    pox.p[2] = 1.0f;
    pos_transfer(matrix, &pox);
    if (x_min > pox.p[0])
    {
        x_min = pox.p[0];
    }
    if (x_max < pox.p[0])
    {
        x_max = pox.p[0];
    }
    if (y_min > pox.p[1])
    {
        y_min = pox.p[1];
    }
    if (y_max < pox.p[1])
    {
        y_max = pox.p[1];
    }

    result_rect->x1 = (int16_t)x_min;
    result_rect->y1 = (int16_t)y_min;
    result_rect->x2 = ceil(x_max);
    result_rect->y2 = ceil(y_max);

    if (isnan(y_min) || isnan(y_max) || isnan(x_min) || isnan(x_max) || \
        result_rect->x2 < result_rect->x1 || result_rect->y2 < result_rect->y1)
    {
        return false;
    }
    return true;
}

void lv_acc_dma_channel_init(void)
{
    GDMA_channel_request(&high_speed_channel, NULL, true);
    GDMA_channel_request(&low_speed_channel, NULL, false);
    if (high_speed_channel == 0xA5 || low_speed_channel == 0xA5)
    {
        LV_LOG_ERROR("No dma channel valid");
        LV_ASSERT(NULL != NULL);
    }
}

uint8_t lv_acc_get_high_speed_channel(void)
{
    return high_speed_channel;
}

uint8_t lv_acc_get_low_speed_channel(void)
{
    return low_speed_channel;
}

void lv_acc_dma_copy(uint32_t length, uint32_t height, uint32_t src_stride,
                     uint32_t dst_stride, uint8_t *src, uint8_t *dst)
{
    for (int i = 0; i < height; i++)
    {
        memcpy(dst + dst_stride * i, src + src_stride * i, length);
    }
#if LV_PPE_CACHE_STRATEGY != LV_PPE_CACHE_NONE
    lv_ppe_clean_cache(dst, dst_stride * height);
#endif
    return;
    bool use_LLI = true;
    if ((length == src_stride && length == dst_stride) || height == 1)
    {
        use_LLI = false;
    }
    uint32_t dma_height = height;
    uint32_t buffer_size = 0;
    uint32_t total_size_in_byte = length * height;
    uint32_t total_size = total_size_in_byte / 4;
    uint8_t m_size = 0, data_size = 0;
    uint8_t dma_depth = rtl_idu_get_dma_depth(high_speed_channel);
    if (length % 4 == 0)
    {
        data_size = GDMA_DataSize_Word;
        if (dma_depth == 4)
        {
            m_size = GDMA_Msize_4;
        }
        else if (dma_depth == 8)
        {
            m_size = GDMA_Msize_8;
        }
        else if (dma_depth == 32)
        {
            m_size = GDMA_Msize_16;
        }
        else
        {
            return;
        }
        buffer_size = length / 4;
        if (!use_LLI)
        {
            if (buffer_size > 65535)
            {
                use_LLI = true;
                dma_height = buffer_size / 65535;
                if (buffer_size % 65535)
                {
                    dma_height += 1;
                }
                buffer_size = 65535;
            }
            else
            {
                buffer_size = total_size;
            }
        }
    }
    else if (length % 2 == 0)
    {
        if (dma_depth == 4)
        {
            m_size = GDMA_Msize_8;
        }
        else if (dma_depth == 8)
        {
            m_size = GDMA_Msize_16;
        }
        else if (dma_depth == 32)
        {
            m_size = GDMA_Msize_32;
        }
        else
        {
            return;
        }
        data_size = GDMA_DataSize_HalfWord;
        buffer_size = length / 2;
        total_size = 0;
        if (!use_LLI)
        {
            total_size = total_size_in_byte / 2;
            if (total_size > 65535)
            {
                use_LLI = true;
                dma_height = total_size / 65535;
                if (total_size % 65535)
                {
                    dma_height += 1;
                }
                buffer_size = 65535;
            }
            else
            {
                buffer_size = total_size;
            }
        }
    }
    else
    {
        data_size = GDMA_DataSize_Byte;
        if (dma_depth == 4)
        {
            m_size = GDMA_Msize_16;
        }
        else if (dma_depth == 8)
        {
            m_size = GDMA_Msize_32;
        }
        else if (dma_depth == 32)
        {
            m_size = GDMA_Msize_64;
        }
        else
        {
            return;
        }
        buffer_size = length;
        total_size = 0;
        if (!use_LLI)
        {
            total_size = total_size_in_byte;
            if (total_size > 65535)
            {
                use_LLI = true;
                dma_height = total_size / 65535;
                if (total_size % 65535)
                {
                    dma_height += 1;
                }
                buffer_size = 65535;
            }
            else
            {
                buffer_size = total_size;
            }
        }
    }

    GDMA_LLIDef *GDMA_LLIStruct;
    if (use_LLI)
    {
        GDMA_LLIStruct = (GDMA_LLIDef *)lv_malloc(dma_height * sizeof(GDMA_LLIDef));
        if (GDMA_LLIStruct == NULL)
        {
            assert_param(GDMA_LLIStruct != NULL);
        }
        else
        {
            memset(GDMA_LLIStruct, 0, dma_height * sizeof(GDMA_LLIDef));
        }
    }
    uint32_t start_address = (uint32_t)src;
    uint32_t dest_address = (uint32_t)dst;
    RCC_PeriphClockCmd(APBPeriph_GDMA, APBPeriph_GDMA_CLOCK, ENABLE);
    GDMA_ChannelTypeDef *dma_channel = rtl_idu_get_dma_channel_int(high_speed_channel);
    GDMA_InitTypeDef RX_GDMA_InitStruct;
    /*--------------GDMA init-----------------------------*/
    GDMA_StructInit(&RX_GDMA_InitStruct);
    RX_GDMA_InitStruct.GDMA_ChannelNum          = high_speed_channel;
    RX_GDMA_InitStruct.GDMA_BufferSize          = buffer_size;
    RX_GDMA_InitStruct.GDMA_DIR                 = GDMA_DIR_MemoryToMemory;
    RX_GDMA_InitStruct.GDMA_SourceInc           = DMA_SourceInc_Inc;
    RX_GDMA_InitStruct.GDMA_DestinationInc      = DMA_DestinationInc_Inc;
    RX_GDMA_InitStruct.GDMA_SourceMsize         =
        m_size;                         // 8 msize for source msize
    RX_GDMA_InitStruct.GDMA_DestinationMsize    =
        m_size;                         // 8 msize for destiantion msize
    RX_GDMA_InitStruct.GDMA_DestinationDataSize =
        data_size;                   // 32 bit width for destination transaction
    RX_GDMA_InitStruct.GDMA_SourceDataSize      =
        data_size;                   // 32 bit width for source transaction
    RX_GDMA_InitStruct.GDMA_SourceAddr          = (uint32_t)start_address;
    RX_GDMA_InitStruct.GDMA_DestinationAddr     = (uint32_t)dest_address;

    if (use_LLI)
    {
        RX_GDMA_InitStruct.GDMA_Multi_Block_Mode = LLI_TRANSFER;
        RX_GDMA_InitStruct.GDMA_Multi_Block_En = 1;
        RX_GDMA_InitStruct.GDMA_Multi_Block_Struct = (uint32_t)GDMA_LLIStruct;
    }

    GDMA_Init(dma_channel, &RX_GDMA_InitStruct);
    if (use_LLI && GDMA_LLIStruct != NULL)
    {
        for (int i = 0; i < dma_height; i++)
        {
            if (i == dma_height - 1)
            {
                GDMA_LLIStruct[i].SAR = start_address + src_stride * i;
                GDMA_LLIStruct[i].DAR = (uint32_t)dest_address + dst_stride * i;
                GDMA_LLIStruct[i].LLP = 0;
                /* configure low 32 bit of CTL register */
                GDMA_LLIStruct[i].CTL_LOW = (BIT(0)
                                             | (RX_GDMA_InitStruct.GDMA_DestinationDataSize << 1)
                                             | (data_size << 4)
                                             | (RX_GDMA_InitStruct.GDMA_DestinationInc << 7)
                                             | (RX_GDMA_InitStruct.GDMA_SourceInc << 9)
                                             | (RX_GDMA_InitStruct.GDMA_DestinationMsize << 11)
                                             | (RX_GDMA_InitStruct.GDMA_SourceMsize << 14)
                                             | (RX_GDMA_InitStruct.GDMA_DIR << 20));
                /* configure high 32 bit of CTL register */
                if (total_size == 0)
                {
                    GDMA_LLIStruct[i].CTL_HIGH = buffer_size;
                }
                else
                {
                    GDMA_LLIStruct[i].CTL_HIGH = total_size - i * buffer_size;
                }
            }
            else
            {
                GDMA_LLIStruct[i].SAR = start_address + src_stride * i;
                GDMA_LLIStruct[i].DAR = (uint32_t)dest_address + dst_stride * i;
                GDMA_LLIStruct[i].LLP = (uint32_t)&GDMA_LLIStruct[i + 1];
                /* configure low 32 bit of CTL register */
                GDMA_LLIStruct[i].CTL_LOW = rtl_idu_get_dma_ctl_low_int(dma_channel);
                /* configure high 32 bit of CTL register */
                GDMA_LLIStruct[i].CTL_HIGH = buffer_size;
            }
        }
        SCB_CleanDCache_by_Addr(GDMA_LLIStruct, sizeof(GDMA_LLIDef) * dma_height);
    }
    GDMA_INTConfig(high_speed_channel, GDMA_INT_Transfer, ENABLE);
    GDMA_Cmd(high_speed_channel, ENABLE);
    while (GDMA_GetTransferINTStatus(high_speed_channel) != SET);
    GDMA_ClearINTPendingBit(high_speed_channel, GDMA_INT_Transfer);
    if (use_LLI && GDMA_LLIStruct != NULL)
    {
        lv_free(GDMA_LLIStruct);
    }
}

void subtract_intersection(const lv_area_t *area, const lv_area_t *intersection, lv_area_t *result,
                           int *result_area_count)
{
    *result_area_count = 0;

    // Top strip
    if (area->y1 < intersection->y1)
    {
        result[*result_area_count] = (lv_area_t) { area->x1, area->y1, area->x2, intersection->y1 - 1 };
        (*result_area_count)++;
    }

    // Bottom strip
    if (area->y2 > intersection->y2)
    {
        result[*result_area_count] = (lv_area_t) { area->x1, intersection->y2 + 1, area->x2, area->y2 };
        (*result_area_count)++;
    }

    // Left strip
    if (area->x1 < intersection->x1)
    {
        result[*result_area_count] = (lv_area_t) { area->x1, intersection->y1, intersection->x1 - 1, intersection->y2 };
        (*result_area_count)++;
    }

    // Right strip
    if (area->x2 > intersection->x2)
    {
        result[*result_area_count] = (lv_area_t) { intersection->x2 + 1, intersection->y1, area->x2, intersection->y2 };
        (*result_area_count)++;
    }
}

bool lv_ppe_use_entire(lv_draw_task_t *t, lv_display_t *disp)
{
    return (lv_display_get_horizontal_resolution(disp) == lv_area_get_width(
                &t->target_layer->buf_area)) && \
           (lv_display_get_vertical_resolution(disp) == lv_area_get_height(
                &t->target_layer->buf_area));
}

#if LV_PPE_DRAW_ASYNC
static volatile lv_image_decoder_dsc_t *decoded_dsc_cache = NULL;
void lv_ppe_register_decoded_dsc(lv_image_decoder_dsc_t *dsc)
{
    if (decoded_dsc_cache)
    {
        lv_image_decoder_close(decoded_dsc_cache);
    }
    decoded_dsc_cache = dsc;
}

void lv_ppe_async_finish(void)
{
    PPE_Finish();
    if (decoded_dsc_cache)
    {
        lv_image_decoder_close(decoded_dsc_cache);
        decoded_dsc_cache = NULL;
    }
}
#endif

void lv_ppe_finish(void)
{
#if LV_PPE_DRAW_ASYNC
    lv_ppe_async_finish();
#else
    PPE_Finish();
#endif
}

#if LV_PPE_CACHE_STRATEGY != LV_PPE_CACHE_NONE
bool lv_is_previous_cpu(void)
{
    return previous_cpu;
}

bool lv_is_previous_hw(void)
{
    return previous_hw;
}

void lv_set_previous_cpu(bool is_cpu)
{
    previous_cpu = is_cpu;
}

void lv_set_previous_hw(bool is_hw)
{
    previous_hw = is_hw;
}
void lv_ppe_clean_cache(void *addr, uint32_t size)
{
#if LV_PPE_CACHE_STRATEGY == LV_PPE_CACHE_WRITE_BACK
    if (size <= 32768)
    {
        SCB_CleanInvalidateDCache_by_Addr(addr, size);
    }
    else
    {
        SCB_CleanInvalidateDCache();
    }
#else
    if (size <= 32768)
    {
        SCB_InvalidateDCache_by_Addr(addr, size);
    }
    else
    {
        SCB_InvalidateDCache();
    }
#endif
}
#endif
#endif /*LV_USE_PPE*/
