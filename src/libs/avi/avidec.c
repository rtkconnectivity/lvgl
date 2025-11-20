#include "avidec.h"
#include "../../misc/lv_log.h"
#include "../../stdlib/lv_mem.h"
#include "../../misc/lv_color.h"

#if LV_USE_AVI || LV_AVI_DEBUG_VIEW

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

static ad_AVI  * avi_open(ad_AVI * avi);
static bool f_avi_open(ad_AVI * avi, const void * path, bool is_file);
static void f_avi_read(ad_AVI * avi, void * buf, size_t len);
static int f_avi_seek(ad_AVI * avi, size_t pos, int k);
static void f_avi_close(ad_AVI * avi);


static uint16_t read_num_16(ad_AVI * avi)
{
    uint16_t num = 0;

    f_avi_read(avi, (void *)&num, 2);
    return num;
}

static uint32_t read_num_32(ad_AVI * avi)
{
    uint32_t num = 0;

    f_avi_read(avi, (void *)&num, 4);
    return num;
}

ad_AVI *ad_open_avi_file(const char * fname)
{
    ad_AVI avi_base;
    memset(&avi_base, 0, sizeof(avi_base));

    bool res = f_avi_open(&avi_base, fname, true);
    if(!res) return NULL;

    return avi_open(&avi_base);
}

ad_AVI *ad_open_avi_data(const void * data)
{
    ad_AVI avi_base;
    memset(&avi_base, 0, sizeof(avi_base));

    bool res = f_avi_open(&avi_base, data, false);
    if(!res) return NULL;

    return avi_open(&avi_base);
}

static ad_AVI * avi_open(ad_AVI * avi_base)
{
    uint8_t sigver[5];
    uint32_t file_size = 0;

    uint32_t list_size = 0;
    uint32_t chunk_size = 0;

    uint8_t list_type[5];
    uint8_t id[5];

    uint32_t hdrl_size = 0;
    int hdrl_data_beacon = 0;
    uint32_t movi_size = 0;
    int movi_data_beacon = 0;
    uint32_t idx1_size = 0;
    int idx1_data_beacon = 0;



    ad_AVI * avi = NULL;

    memset((void *)sigver, 0, sizeof(sigver));
    memset((void *)list_type, 0, sizeof(list_type));
    memset((void *)id, 0, sizeof(id));

    /* RIFF Header */
    f_avi_read(avi_base, sigver, 4);
    if(memcmp(sigver, "RIFF", 4) != 0) 
    {
        LV_LOG_WARN("invalid signature");
        goto fail;
    }
    /* File size */
    file_size  = read_num_32(avi_base) + 8;
    LV_LOG_INFO("AVI filesize %d", file_size);
    /* Format */
    f_avi_read(avi_base, sigver, 4);
    if(memcmp(sigver, "AVI ", 4) != 0) 
    {
        LV_LOG_WARN("invalid format");
        goto fail;
    }
    /* LIST - hdrl */
    f_avi_read(avi_base, sigver, 4);
    if(memcmp(sigver, "LIST", 4) != 0) 
    {
        LV_LOG_WARN("invalid format");
        goto fail;
    }
    hdrl_size = read_num_32(avi_base);
    hdrl_data_beacon = f_avi_seek(avi_base, 0, LV_FS_SEEK_CUR);

    f_avi_read(avi_base, list_type, 4);
    if(memcmp(list_type, "hdrl", 4) != 0) 
    {
        LV_LOG_WARN("invalid list type %s", list_type);
        goto fail;
    }
    /* AVI main header */
    f_avi_read(avi_base, id, 4);
    if(memcmp(id, "avih", 4) != 0) 
    {
        LV_LOG_WARN("invalid header %s", id);
        goto fail;
    }
    chunk_size = read_num_32(avi_base);
    MainAVIHeader_t main_hdr;
    f_avi_read(avi_base, &main_hdr, sizeof(MainAVIHeader_t));
    f_avi_seek(avi_base, chunk_size - sizeof(MainAVIHeader_t), LV_FS_SEEK_CUR);

    /* LIST - strl */
    f_avi_read(avi_base, sigver, 4);
    if(memcmp(sigver, "LIST", 4) != 0) 
    {
        LV_LOG_WARN("invalid format");
        goto fail;
    }
    list_size = read_num_32(avi_base);
    f_avi_read(avi_base, list_type, 4);
    if(memcmp(list_type, "strl", 4) != 0) 
    {
        LV_LOG_WARN("invalid list type %s", list_type);
        goto fail;
    }
    /* Stream header */
    f_avi_read(avi_base, id, 4);
    if(memcmp(id, "strh", 4) != 0) 
    {
        LV_LOG_WARN("invalid header %s", id);
        goto fail;
    } 
    chunk_size = read_num_32(avi_base); 

    AVIStreamHeader_t stream_hdr;
    f_avi_read(avi_base, &stream_hdr, sizeof(AVIStreamHeader_t));

    /* Stream format */
    memcpy(id, &stream_hdr.stream_format, 4);
    if(memcmp(id, "strf", 4) != 0) 
    {
        LV_LOG_WARN("invalid header %s", id);
        goto fail;
    } 
    chunk_size = stream_hdr.length_format;

    BitMapInfoHeader_t stream_format;
    f_avi_read(avi_base, &stream_format, sizeof(BitMapInfoHeader_t));
    if(memcmp((void *)&stream_format.compression, "MJPG", 4) != 0) 
    {
        LV_LOG_WARN("invalid compression %s", (char *)&stream_format.compression);
        goto fail;
    } 

    
    /* Find movi list */
    int pos = f_avi_seek(avi_base, hdrl_data_beacon, LV_FS_SEEK_SET);
    pos = f_avi_seek(avi_base, hdrl_size, LV_FS_SEEK_CUR);
    while(pos < file_size)
    {
        uint32_t size = 0;
        f_avi_read(avi_base, sigver, 4);
        size = read_num_32(avi_base);
        if(memcmp(sigver, "JUNK", 4) == 0) {
            pos = f_avi_seek(avi_base, size, LV_FS_SEEK_CUR);
        }
        else if(memcmp(sigver, "LIST", 4) == 0) 
        {
            f_avi_read(avi_base, list_type, 4);
            if(memcmp(list_type, "movi", 4) != 0) 
            {
                pos = f_avi_seek(avi_base, size - 4, LV_FS_SEEK_CUR);
            }
            else
            {
                pos = f_avi_seek(avi_base, 0, LV_FS_SEEK_CUR);
                movi_size = size;
                movi_data_beacon = pos - 4;
                break;
            }
        }
        pos = f_avi_seek(avi_base, 0, LV_FS_SEEK_CUR);
    }
    if(pos >= file_size)
    {
        LV_LOG_WARN("movi not found");
        goto fail;
    }
    
    pos = f_avi_seek(avi_base, movi_size - 4, LV_FS_SEEK_CUR);
    /* idx1 */
    f_avi_read(avi_base, sigver, 4);
    if(memcmp(sigver, "idx1", 4) != 0) {
        LV_LOG_WARN("invalid format");
        goto fail;
    }
    idx1_size = read_num_32(avi_base);
    idx1_data_beacon = f_avi_seek(avi_base, 0, LV_FS_SEEK_CUR);


    avi = lv_malloc(sizeof(ad_AVI));

    if(!avi) goto fail;
    memcpy(avi, avi_base, sizeof(ad_AVI));


    avi->width  = main_hdr.width;
    avi->height = main_hdr.height;
    avi->frame_num = main_hdr.total_frame;
    avi->frame_time = main_hdr.usec_per_frame / 1000;

    avi->file_size = file_size;
    avi->movi_size = movi_size;
    avi->chunk_num = idx1_size / sizeof(IndexItem_t);
    avi->movi_data_beacon = movi_data_beacon;
    avi->idx1_data_beacon = idx1_data_beacon;

    avi->cur_frame = (uint32_t) -1;
    avi->loop_count = 0;

    goto ok;
fail:
    f_avi_close(avi_base);
ok:
    return avi;
}



void ad_render_frame(ad_AVI * avi)
{

}


/* Return 1 if got a frame; 0 if error. */
int ad_get_frame(ad_AVI * avi)
{
    avi->cur_frame ++;
    if(avi->cur_frame >= avi->frame_num && avi->loop_count == 0)
    {
        avi->cur_frame = avi->frame_num - 1;
    }
    else if(avi->loop_count > 0)
    {
        avi->loop_count --;
    }
    avi->cur_frame = avi->cur_frame % avi->frame_num;

    int32_t frame_cnt = -1;
    f_avi_seek(avi, avi->idx1_data_beacon, LV_FS_SEEK_SET);
    for(uint32_t i=0; i<avi->chunk_num; i++)
    {
        IndexItem_t idx;
        f_avi_read(avi, &idx, sizeof(IndexItem_t));
        if(idx.chunk_ID == 0x63643030) // "00dc"
        {
            frame_cnt++;
            if(frame_cnt == avi->cur_frame)
            {
                avi->cur_frame_pos = avi->movi_data_beacon + idx.offset;
                avi->cur_frame_size = idx.size;
                LV_LOG_INFO("frame %d, offset 0x%x, size %d, pos 0x%x", frame_cnt, idx.offset, avi->cur_frame_size, avi->cur_frame_pos);

                if(avi->is_file) 
                {
                    f_avi_seek(avi, avi->cur_frame_pos + 8, LV_FS_SEEK_SET);
                    avi->framedata_raw = lv_malloc(avi->cur_frame_size + 7);
                    if(avi->framedata_raw)
                    {
                        avi->framedata = (uint8_t*)(((uintptr_t)(avi->framedata_raw + 7) >> 3)  << 3);
                        f_avi_read(avi, avi->framedata, avi->cur_frame_size);
                    }
                    else
                    {
                        LV_LOG_ERROR("AVI load frame malloc fail");
                        return 0;
                    }
                }
                else 
                {
                    avi->framedata = (uint8_t * )(avi->data + avi->cur_frame_pos + 8);
                }

                return 1;
            }
        }
    }
    return 0;
}

void ad_release_frame(ad_AVI * avi)
{
    if(avi->is_file && avi->framedata_raw)
    {
        lv_free(avi->framedata_raw);
    }

    avi->framedata = NULL;
    avi->framedata_raw = NULL;
}

void ad_rewind(ad_AVI * avi)
{
    avi->loop_count = -1;
    // f_avi_seek(avi, avi->anim_start, LV_FS_SEEK_SET);
    avi->cur_frame = (uint32_t) -1;
}

void ad_close_avi(ad_AVI * avi)
{
    ad_release_frame(avi);
    f_avi_close(avi);
    lv_free(avi);
}



static bool f_avi_open(ad_AVI * avi, const void * path, bool is_file)
{
    avi->f_rw_p = 0;
    avi->data = NULL;
    avi->is_file = is_file;

    if(is_file) {
        lv_fs_res_t res = lv_fs_open(&avi->fd, path, LV_FS_MODE_RD);
        if(res != LV_FS_RES_OK) return false;
        else return true;
    }
    else {
        avi->data = path;
        return true;
    }
}

static void f_avi_read(ad_AVI * avi, void * buf, size_t len)
{
    if(avi->is_file) {
        lv_fs_read(&avi->fd, buf, len, NULL);
    }
    else {
        memcpy(buf, &avi->data[avi->f_rw_p], len);
        avi->f_rw_p += len;
    }
}

static int f_avi_seek(ad_AVI * avi, size_t pos, int k)
{
    if(avi->is_file) {
        lv_fs_seek(&avi->fd, pos, k);
        uint32_t x;
        lv_fs_tell(&avi->fd, &x);
        return x;
    }
    else {
        if(k == LV_FS_SEEK_CUR) avi->f_rw_p += pos;
        else if(k == LV_FS_SEEK_SET) avi->f_rw_p = pos;
        return avi->f_rw_p;
    }
}

static void f_avi_close(ad_AVI * avi)
{
    if(avi->is_file) {
        lv_fs_close(&avi->fd);
    }
}

#endif /*LV_USE_AVI*/
