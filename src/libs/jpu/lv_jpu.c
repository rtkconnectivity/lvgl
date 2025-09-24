/**
 * @file lv_jpu.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../draw/lv_image_decoder_private.h"
#include "../../../lvgl.h"

// #define  LV_JPU_DEBUG 1

#if LV_USE_RTK_JPU || LV_JPU_DEBUG

#include "lv_jpu.h"
#include <stdio.h>
#include "../../core/lv_global.h"
#include "string.h"
#include "rtl_hal_jpu.h"

/*********************
 *      DEFINES
 *********************/

#define DECODER_NAME    "JPU"

#define image_cache_draw_buf_handlers &(LV_GLOBAL_DEFAULT()->image_cache_draw_buf_handlers)

#define JPEG_PIXEL_SIZE 3 /* RGB888 */
#define JPEG_SIGNATURE 0xFFD8FF
#define IS_JPEG_SIGNATURE(x) (((x) & 0x00FFFFFF) == JPEG_SIGNATURE)

/**********************
 *      TYPEDEFS
 **********************/


/**********************
 *  STATIC PROTOTYPES
 **********************/
static lv_result_t decoder_info(lv_image_decoder_t *decoder, lv_image_decoder_dsc_t *dsc,
                                lv_image_header_t *header);
static lv_result_t decoder_open(lv_image_decoder_t *decoder, lv_image_decoder_dsc_t *dsc);
static void decoder_close(lv_image_decoder_t *decoder, lv_image_decoder_dsc_t *dsc);
static lv_draw_buf_t *decode_jpeg_file(const char *filename);
// static uint8_t * read_file(const char * filename, uint32_t * size);
static bool get_jpeg_head_info(const void *src, lv_image_src_t src_type, uint32_t *width,
                               uint32_t  *height);
static bool get_jpeg_size(uint8_t *data, uint32_t data_size, uint32_t *width, uint32_t *height);
// static bool get_jpeg_direction(uint8_t * data, uint32_t data_size, uint32_t * orientation);
// static void rotate_buffer(lv_draw_buf_t * decoded, uint8_t * buffer, uint32_t line_index, uint32_t angle);
// static void error_exit(j_common_ptr cinfo);
/**********************
 *  STATIC VARIABLES
 **********************/
const int JPEG_EXIF = 0x45786966; /* Exif data structure tag */
const int JPEG_BIG_ENDIAN_TAG = 0x4d4d;
const int JPEG_LITTLE_ENDIAN_TAG = 0x4949;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**
 * Register the JPEG decoder functions in LVGL
 */
void lv_jpu_init(void)
{
    lv_image_decoder_t *dec = lv_image_decoder_create();
    lv_image_decoder_set_info_cb(dec, decoder_info);
    lv_image_decoder_set_open_cb(dec, decoder_open);
    lv_image_decoder_set_close_cb(dec, decoder_close);

    dec->name = DECODER_NAME;
    LV_LOG_INFO("JPU Decoder init");
}

void lv_jpu_deinit(void)
{
    lv_image_decoder_t *dec = NULL;
    while ((dec = lv_image_decoder_get_next(dec)) != NULL)
    {
        if (dec->info_cb == decoder_info)
        {
            lv_image_decoder_delete(dec);
            break;
        }
    }
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/**
 * Get info about a JPEG image
 * @param dsc image descriptor containing the source and type of the image and other info.
 * @param header store the info here
 * @return LV_RESULT_OK: no error; LV_RESULT_INVALID: can't get the info
 */
static lv_result_t decoder_info(lv_image_decoder_t *decoder, lv_image_decoder_dsc_t *dsc,
                                lv_image_header_t *header)
{
    LV_UNUSED(decoder); /*Unused*/
    lv_image_src_t src_type = dsc->src_type;          /*Get the source type*/

    uint32_t jpg_signature = 0;
    uint32_t width;
    uint32_t height;
    /*If it's a JPEG file...*/
    if (src_type == LV_IMAGE_SRC_FILE)
    {
        const char *src = dsc->src;
        uint32_t rn;
        lv_fs_read(&dsc->file, &jpg_signature, sizeof(jpg_signature), &rn);

        if (rn != sizeof(jpg_signature))
        {
            LV_LOG_WARN("file: %s signature len = %" LV_PRIu32 " error", src, rn);
            return LV_RESULT_INVALID;
        }

        const char *ext = lv_fs_get_ext(src);
        bool is_jpeg_ext = (lv_strcmp(ext, "jpg") == 0)
                           || (lv_strcmp(ext, "jpeg") == 0);

        if (!IS_JPEG_SIGNATURE(jpg_signature))
        {
            if (is_jpeg_ext)
            {
                LV_LOG_WARN("file: %s signature = 0X%" LV_PRIX32 " error", src, jpg_signature);
            }
            return LV_RESULT_INVALID;
        }
        LV_LOG_INFO("JPU Decoder info");

        if (!get_jpeg_head_info(src, src_type, &width, &height))
        {
            return LV_RESULT_INVALID;
        }

        /*Save the data in the header*/
#if LV_COLOR_DEPTH==16
        header->cf = LV_COLOR_FORMAT_RGB565;
        header->stride = 2;
#elif LV_COLOR_DEPTH==32
        header->cf = LV_COLOR_FORMAT_RGB888;
        header->stride = 3;
#endif
        header->w = width;
        header->h = height;
        header->stride *= header->w;

        return LV_RESULT_OK;
    }
    else if (dsc->src_type == LV_IMAGE_SRC_VARIABLE)
    {
        const lv_image_dsc_t *src_dsc = (const lv_image_dsc_t *)dsc->src;
        const uint8_t *data = src_dsc->data;
        memcpy((void *)&jpg_signature, data, sizeof(jpg_signature));

        if (!IS_JPEG_SIGNATURE(jpg_signature))
        {
            return LV_RESULT_INVALID;
        }
        LV_LOG_INFO("JPU Decoder info");


        if (!get_jpeg_head_info(data, src_type, &width, &height))
        {
            return LV_RESULT_INVALID;
        }

        /*Save the data in the header*/
#if LV_COLOR_DEPTH==16
        header->cf = LV_COLOR_FORMAT_RGB565;
        header->stride = 2;
#elif LV_COLOR_DEPTH==32
        header->cf = LV_COLOR_FORMAT_RGB888;
        header->stride = 3;
#endif
        header->w = width;
        header->h = height;
        header->stride *= header->w;

        return LV_RESULT_OK;
    }


    return LV_RESULT_INVALID;         /*If didn't succeeded earlier then it's an error*/

}

/**
 * Open a JPEG image and return the decided image
 * @param decoder pointer to the decoder
 * @param dsc     pointer to the decoder descriptor
 * @return LV_RESULT_OK: no error; LV_RESULT_INVALID: can't open the image
 */
static lv_result_t decoder_open(lv_image_decoder_t *decoder, lv_image_decoder_dsc_t *dsc)
{
    LV_UNUSED(decoder); /*Unused*/

    LV_LOG_INFO("jpu decoder_open\n");
    // cache check

    /*If it's a JPEG file...*/
    if (dsc->src_type == LV_IMAGE_SRC_FILE)
    {
        const char *fn = dsc->src;

        // load file
        lv_fs_file_t f;
        lv_fs_res_t res = lv_fs_open(&f, fn, LV_FS_MODE_RD);
        uint8_t *file_data = NULL;
        uint8_t *img_data = NULL;
        uint32_t f_sz = 0;

        if (res != LV_FS_RES_OK)
        {
            //DBG_DIRECT(" %s %d\n", __FUNCTION__, __LINE__);
            return LV_RES_INV;
        }

        do
        {
            LV_LOG_INFO("load img into ram! %s\n", fn);
            uint32_t rd_sz = 0;
            res = lv_fs_seek(&f, 0, LV_FS_SEEK_END);
            if (res != LV_FS_RES_OK) {break;}
            res = lv_fs_tell(&f, &f_sz);
            if (res != LV_FS_RES_OK) {break;}

            file_data = lv_malloc(f_sz + 7);
            LV_ASSERT_MALLOC(file_data);
            img_data = (uint8_t *)((((uint32_t)file_data + 7) >> 3) << 3);
            res = lv_fs_seek(&f, 0, LV_FS_SEEK_SET);
            if (res != LV_FS_RES_OK)
            {
                lv_free((void *)file_data);
                file_data = NULL;
                break;
            }
            res = lv_fs_read(&f, img_data, f_sz, &rd_sz);
            if (res != LV_FS_RES_OK || f_sz != rd_sz)
            {
                lv_free((void *)file_data);
                file_data = NULL;
                break;
            }
        }
        while (0);
        lv_fs_close(&f);
        if (res != LV_FS_RES_OK || !file_data)
        {
            //DBG_DIRECT(" %s %d\n", __FUNCTION__, __LINE__);
            return LV_RES_INV;
        }

        // start decode
#if 1
        JPU_DEC_PARAM dec_param;
        uint8_t *output = NULL;
        uint32_t output_size = 0, w = 0, h = 0;
        JPU_ERROR err;

        memset(&dec_param, 0, sizeof(JPU_DEC_PARAM));
        dec_param.data = img_data;
        dec_param.size = f_sz;
        dec_param.frameFormat = PACKED_FORMAT_422_YUYV;
        dec_param.useWrapper = 1;
        dec_param.rgbType = JPU_RGB565;
        LV_LOG_INFO("data %p, %d", dec_param.data, dec_param.size);
        hal_jpu_mem_init(lv_malloc, lv_free);
        err = hal_jpu_decode(&dec_param, &output, &output_size, &w, &h);
        if (err != JPU_SUCCESS)
        {
            LV_LOG_WARN("decode jpeg file failed, err: %d", err);
            lv_free((void *)file_data);
            return LV_RESULT_INVALID;
        }
        lv_free((void *)file_data);

#endif

        lv_draw_buf_t *draw_buf = lv_malloc_zeroed(sizeof(lv_draw_buf_t));
        LV_ASSERT_MALLOC(draw_buf);
        if (draw_buf == NULL) { return LV_RESULT_INVALID; }

#if 1
        draw_buf->header.w = dsc->header.w;
        draw_buf->header.h = dsc->header.h;
        if (dec_param.rgbType == JPU_RGB565)
        {
            draw_buf->header.cf = LV_COLOR_FORMAT_RGB565;
            draw_buf->header.stride = w * 2;
        }
        else if (dec_param.rgbType == JPU_RGB888)
        {
            draw_buf->header.cf = LV_COLOR_FORMAT_RGB888;
            draw_buf->header.stride = w * 3;
        }

        draw_buf->header.flags = LV_IMAGE_FLAGS_MODIFIABLE | LV_IMAGE_FLAGS_ALLOCATED;
        draw_buf->header.magic = LV_IMAGE_HEADER_MAGIC;
        draw_buf->data = output;
        draw_buf->unaligned_data = hal_jpu_get_raw_buffer(output);
        draw_buf->data_size = output_size;
        draw_buf->handlers = image_cache_draw_buf_handlers;
#endif

        lv_draw_buf_t *decoded = draw_buf;
        dsc->decoded = decoded;

        if (dsc->args.no_cache) { return LV_RESULT_OK; }

        /*If the image cache is disabled, just return the decoded image*/
        if (!lv_image_cache_is_enabled()) { return LV_RESULT_OK; }

        /*Add the decoded image to the cache*/
        lv_image_cache_data_t search_key;
        search_key.src_type = dsc->src_type;
        search_key.src = dsc->src;
        search_key.slot.size = decoded->data_size;

        lv_cache_entry_t *entry = lv_image_decoder_add_to_cache(decoder, &search_key, decoded, NULL);

        if (entry == NULL)
        {
            lv_draw_buf_destroy(decoded);
            hal_jpu_clean_buffer(decoded->data);
            return LV_RESULT_INVALID;
        }
        dsc->cache_entry = entry;
        return LV_RESULT_OK;    /*If not returned earlier then it failed*/
    }
    else if (dsc->src_type == LV_IMAGE_SRC_VARIABLE)
    {
        const lv_image_dsc_t *src_dsc = (const lv_image_dsc_t *)dsc->src;
        const uint8_t *img_data = src_dsc->data;
        const uint8_t *pop = img_data;
        uint32_t img_size = 0;

        while (1)
        {
            if (*pop == 0xff && *(pop + 1) == 0xd9)
            {
                img_size = pop - img_data + 2;
                break;
            }
            pop++;
        }


        // start decode
        LV_LOG_INFO("start dec");
#if 1
        JPU_DEC_PARAM dec_param;
        uint8_t *output = NULL;
        uint32_t output_size = 0, w = 0, h = 0;
        JPU_ERROR err;

        memset(&dec_param, 0, sizeof(JPU_DEC_PARAM));
        dec_param.data = (uint8_t *)img_data;
        dec_param.size = img_size;
        dec_param.frameFormat = PACKED_FORMAT_422_YUYV;
        dec_param.useWrapper = 1;
        dec_param.rgbType = JPU_RGB565;
        LV_LOG_INFO("data %p, %d", dec_param.data, dec_param.size);
        hal_jpu_mem_init(lv_malloc, lv_free);
        err = hal_jpu_decode(&dec_param, &output, &output_size, &w, &h);
        if (err != JPU_SUCCESS)
        {
            LV_LOG_WARN("decode jpeg file failed, err: %d", err);
            return LV_RESULT_INVALID;
        }

        LV_LOG_INFO("decode jpeg sucess  w %d h %d", w, h);
#endif


        lv_draw_buf_t *draw_buf = lv_malloc_zeroed(sizeof(lv_draw_buf_t));
        LV_ASSERT_MALLOC(draw_buf);
        if (draw_buf == NULL) { return LV_RESULT_INVALID; }

#if 1
        draw_buf->header.w = dsc->header.w;
        draw_buf->header.h = dsc->header.h;
        if (dec_param.rgbType == JPU_RGB565)
        {
            draw_buf->header.cf = LV_COLOR_FORMAT_RGB565;
            draw_buf->header.stride = w * 2;
        }
        else if (dec_param.rgbType == JPU_RGB888)
        {
            draw_buf->header.cf = LV_COLOR_FORMAT_RGB888;
            draw_buf->header.stride = w * 3;
        }

        draw_buf->header.flags = LV_IMAGE_FLAGS_MODIFIABLE | LV_IMAGE_FLAGS_ALLOCATED;
        draw_buf->header.magic = LV_IMAGE_HEADER_MAGIC;
        draw_buf->data = output;
        draw_buf->unaligned_data = hal_jpu_get_raw_buffer(output);
        draw_buf->data_size = output_size;
        draw_buf->handlers = image_cache_draw_buf_handlers;
#endif
        lv_draw_buf_t *decoded = draw_buf;

        dsc->decoded = decoded;

        if (dsc->args.no_cache) { return LV_RESULT_OK; }

        /*If the image cache is disabled, just return the decoded image*/
        if (!lv_image_cache_is_enabled()) { return LV_RESULT_OK; }

        /*Add the decoded image to the cache*/
        lv_image_cache_data_t search_key;
        search_key.src_type = dsc->src_type;
        search_key.src = dsc->src;
        search_key.slot.size = decoded->data_size;

        lv_cache_entry_t *entry = lv_image_decoder_add_to_cache(decoder, &search_key, decoded, NULL);

        if (entry == NULL)
        {
            lv_draw_buf_destroy(decoded);
            hal_jpu_clean_buffer(decoded->data);
            return LV_RESULT_INVALID;
        }
        dsc->cache_entry = entry;
        LV_LOG_INFO("JPU add cache");

        return LV_RESULT_OK;    /*If not returned earlier then it failed*/
    }

    return LV_RESULT_INVALID;    /*If not returned earlier then it failed*/
}

/**
 * Free the allocated resources
 */
static void decoder_close(lv_image_decoder_t *decoder, lv_image_decoder_dsc_t *dsc)
{
    LV_UNUSED(decoder); /*Unused*/

    if (dsc->args.no_cache ||
        !lv_image_cache_is_enabled())
    {
        LV_LOG_INFO("JPU close");
        lv_draw_buf_destroy((lv_draw_buf_t *)dsc->decoded);
        hal_jpu_clean_buffer(dsc->decoded->data);
    }
}

static bool align_jpeg_size(uint32_t *width, uint32_t *height, uint32_t format)
{
    if (format == 420 || format == 422)
    {
        *width = ((*width + 15) >> 4) << 4;
    }
    else
    {
        *width = ((*width + 7) >> 3) << 3;
    }
    if (format == 420)
    {
        *height = ((*height + 15) >> 4) << 4;
    }
    else
    {
        *height = ((*height + 7) >> 3) << 3;
    }
    LV_LOG_INFO("align w %d h %d", *width, *height);
    return true;
}
static bool get_jpeg_header_size(const uint8_t *data, uint32_t size, uint32_t *width,
                                 uint32_t *height, uint32_t *format)
{
    const uint8_t *pdata = data;
    while ((pdata - data) < size)
    {
        if (*pdata == 0xff)
        {
            if (*(pdata + 1) == 0xc0) // sof
            {
                uint16_t *pd16 = (uint16_t *)(pdata + 2 + 2 + 1); // 0xffc0, len(2), Accuracy(1)
                *height = 0xffff & (*pd16 << 8) | (*pd16 >> 8);                    // height (2)
                *width = 0xffff & (*(pd16 + 1) << 8) | (*(pd16 + 1) >> 8);               // width (2)
                uint8_t *pcomp_num = (uint8_t *)(pdata + 2 + 2 + 1 + 2 * 2);
                if (*pcomp_num == 1)
                {
                    *format = 400;
                }
                else
                {
                    uint8_t *py = pcomp_num + 2;
                    switch (*py)
                    {
                    case 0x22:
                        *format = 420;
                        break;
                    case 0x21:
                        *format = 422;
                        break;
                    case 0x11:
                        *format = 444;
                        break;

                    default:
                        *format = 0;
                        break;
                    }
                }
                return true;
            }
            else if (*(pdata + 1) == 0xd9)
            {
                break;
            }
        }
        pdata++;
    }
    return false;
}

static bool get_jpeg_head_info(const void *src, lv_image_src_t src_type, uint32_t *width,
                               uint32_t  *height)
{
    // decode header sof
    uint32_t format = 0;
    *width = 0;
    *height = 0;

    if (src_type == LV_IMAGE_SRC_FILE)
    {
        const char *filename = (const char *)src;
        uint8_t data[512];
        uint32_t data_size = 512;
        uint8_t round = 0;
        lv_fs_file_t f;
        lv_fs_res_t res;


        /* 3 rounds means 3*512 bytes for header analysis*/
        res = lv_fs_open(&f, filename, LV_FS_MODE_RD);
        if (res != LV_FS_RES_OK)
        {
            LV_LOG_WARN("can't open %s", filename);
            return false;
        }

        // looking for sof
        while (round < 3)
        {
            uint32_t rn;
            uint8_t sof_sz = 19;

            memset((void *)data, 0, sizeof(data));
            // do overlap reading (sof size)
            res = lv_fs_seek(&f, round * (data_size - sof_sz), LV_FS_SEEK_SET);
            if (res != LV_FS_RES_OK)
            {
                break;
            }

            res = lv_fs_read(&f, data, data_size, &rn);
            if (res == LV_FS_RES_OK)
            {
                uint8_t sof[20];
                uint8_t *pop = data;

                while (pop - data < data_size - sof_sz + 1)
                {
                    if (*pop == 0xff && *(pop + 1) == 0xc0)
                    {
                        break;
                    }
                    pop++;
                }
                if (pop - data < data_size - sof_sz + 1)
                {
                    memset(sof, 0, sizeof(sof));
                    res = lv_fs_seek(&f, round * (data_size - sof_sz) + (pop - data), LV_FS_SEEK_SET);
                    res = lv_fs_read(&f, sof, sof_sz, &rn);
                    if (res == LV_FS_RES_OK)
                    {
                        if (get_jpeg_header_size(sof, rn, width, height, &format))
                        {
                            LV_LOG_INFO("read jpeg size w %d h %d format %d", *width, *height, format);
                            lv_fs_close(&f);
                            align_jpeg_size(width, height, format);
                            return true;
                        }
                        else
                        {
                            // just in case
                            if (rn < data_size)
                            {
                                break;
                            }
                        }
                    }
                }
            }
            else
            {
                LV_LOG_WARN("read file failed");
                break;
            }

            round++;
        }
        lv_fs_close(&f);
        return false;
    }
    else if (src_type == LV_IMAGE_SRC_VARIABLE)
    {
        const uint8_t *pdata = src;
        if (get_jpeg_header_size(pdata, 3 * 512, width, height, &format))
        {
            align_jpeg_size(width, height, format);
            LV_LOG_INFO("read jpeg size w %d h %d format %d", *width, *height, format);
        }
    }

    if (*width == 0 || *height == 0)
    {
        return false;
    }

    return true;
}

#endif /*LV_USE_JPU*/
