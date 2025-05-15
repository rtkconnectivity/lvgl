/**
 * @file lv_custom_data_update.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "app_main.h"

#if LVGL_USE_CJSON
#include "cJSON.h"

/**********************
 *  GLOBAL VARIABLES
 **********************/
char *cjson_content = NULL;

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
#if defined __WIN32
const char *filename =
    "./realgui/example/web/peripheral_simulation/json/simulation_data.json";
/* read CJSON to string */
char *read_file(const char *file_path)
{
    const char *path = NULL;
    if (!file_path)
    {
        path = filename;
    }
    else
    {
        path = file_path;
    }
    FILE *file = fopen(path, "r");
    if (!file)
    {
        perror("fopen");
        return NULL;
    }
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);
    char *content = (char *)malloc(length + 1);
    if (content)
    {
        fread(content, 1, length, file);
        content[length] = '\0';
    }
    fclose(file);
    return content;
}
#else

void json_refreash()
{
    uint16_t degree = xorshift16() % 359;
    uint16_t move = xorshift16() % 20000;
    uint16_t ex = xorshift16() % 60;
    uint16_t stand = xorshift16() % 30;
    move = move < 1 ? 1 : move;
    ex = ex < 1 ? 1 : ex;
    stand = stand < 1 ? 1 : stand;
    uint16_t AM12 = xorshift16() % 120;
    uint16_t AM6 = xorshift16() % 120;
    uint16_t PM12 = xorshift16() % 120;
    uint16_t PM6 = xorshift16() % 120;
    // gui_log("!cjson_content: %x %x %x %x %x\n", cjson_content[0], cjson_content[1], cjson_content[2], cjson_content[3], cjson_content[4]);

    cJSON *root = cJSON_Parse(cjson_content);
    if (!root)
    {
        gui_log("json_refreash Error parsing JSON!\r\n");
        return;
    }
    cJSON *compass_array = cJSON_GetObjectItem(root, "compass");
    if (compass_array != NULL && cJSON_GetArraySize(compass_array) > 0)
    {
        cJSON *compass_item = cJSON_GetArrayItem(compass_array, 0);
        cJSON_ReplaceItemInObject(compass_item, "degree", cJSON_CreateNumber(degree));
    }

    cJSON *activity_array = cJSON_GetObjectItem(root, "activity");
    if (activity_array != NULL && cJSON_GetArraySize(activity_array) > 0)
    {
        cJSON *activity_item = cJSON_GetArrayItem(activity_array, 0);
        cJSON_ReplaceItemInObject(activity_item, "move", cJSON_CreateNumber(move));
        cJSON_ReplaceItemInObject(activity_item, "exercise", cJSON_CreateNumber(ex));
        cJSON_ReplaceItemInObject(activity_item, "stand", cJSON_CreateNumber(stand));
    }

    cJSON *heart_rate_array = cJSON_GetObjectItem(root, "heart_rate");
    if (heart_rate_array != NULL && cJSON_GetArraySize(heart_rate_array) > 0)
    {
        cJSON *heart_rate_item = cJSON_GetArrayItem(heart_rate_array, 0);
        {
            AM12 = AM12 > 60 ? AM12 : 68;
            cJSON_ReplaceItemInObject(heart_rate_item, "AM12", cJSON_CreateNumber(AM12));
        }
        {
            AM6 = AM6 > 60 ? AM6 : 73;
            cJSON_ReplaceItemInObject(heart_rate_item, "AM6", cJSON_CreateNumber(AM6));
        }
        {
            PM12 = PM12 > 60 ? PM12 : 82;
            cJSON_ReplaceItemInObject(heart_rate_item, "PM12", cJSON_CreateNumber(PM12));
        }
        {
            PM6 = PM6 > 60 ? PM6 : 94;
            cJSON_ReplaceItemInObject(heart_rate_item, "PM6", cJSON_CreateNumber(PM6));
        }
    }
    char *temp = cJSON_PrintUnformatted(root);
    sprintf(cjson_content, "%s", temp);
    gui_free(temp);
    cJSON_Delete(root);
    canvas_update_flag = 0b1101;
    // gui_log("canvas_update_flag %x, line: %d\n", canvas_update_flag, __LINE__);
//    gui_log("cjson_content: %s\n", cjson_content);
}
#endif
void read_json_cb(lv_timer_t *timer)
{
    char *temp = cjson_content;
    cjson_content = read_file(filename);
    if (!cjson_content)
    {
        cjson_content = temp;
        perror("fopen");
    }
    else
    {
        free(temp);
    }
}
#endif