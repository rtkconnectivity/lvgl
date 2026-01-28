/*
 * Copyright (c) 2026, Realtek Semiconductor Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <SDL.h>
#include <pthread.h>
#include "unistd.h"
#include "stdbool.h"
#include <stdio.h>

#include "lvgl.h"

#ifndef DRV_LCD_WIDTH
#define DRV_LCD_WIDTH   480
#endif
#ifndef DRV_LCD_HIGHT
#define DRV_LCD_HIGHT   480
#endif
#ifndef DRV_PIXEL_BITS
#define DRV_PIXEL_BITS   16
#endif

// #define USE_DC_PFB

#ifdef USE_DC_PFB
#define LCD_SECTION_HEIGHT 20
#endif

static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;

static SDL_Rect _rect = { 0, 0, DRV_LCD_WIDTH, DRV_LCD_HIGHT};
static SDL_Surface *surface;
static int bpp;                              /* texture bits per pixel */
static uint32_t Rmask, Gmask, Bmask, Amask;  /* masks for pixel format passed into OpenGL */
static pthread_mutex_t sdl_ok_mutex;
static pthread_cond_t sdl_ok_event;



extern int32_t mouse_x;
extern int32_t mouse_y;
extern bool mouse_left_pressed;
extern uint32_t key_value;
extern pthread_mutex_t input_mutex;
extern int32_t encoder_diff;
extern bool encoder_state;


int sim_screen_width = DRV_LCD_WIDTH;
int sim_screen_hight = DRV_LCD_HIGHT;
int32_t sim_get_width(void)
{
    return sim_screen_width;
}
int32_t sim_get_hight(void)
{
    return sim_screen_hight;
}


static void lcd_update_window(uint8_t *input, uint8_t *output, uint16_t xStart, uint16_t yStart,
                              uint16_t w, uint16_t h)
{
#if (DRV_PIXEL_BITS == 32)
    uint32_t *read = (uint32_t *)input;
    uint32_t *write = (uint32_t *)output;
#else
    uint16_t *read = (uint16_t *)input;
    uint16_t *write = (uint16_t *)output;
#endif
    for (uint32_t i = yStart; i < (h + yStart); i++)
    {
        for (uint32_t j = xStart; j < (w + xStart); j++)
        {
            write[i * sim_get_width() + j] = *read;
            read++;
        }
    }
}

void port_direct_draw_bitmap_to_lcd(int16_t x, int16_t y, int16_t width, int16_t height,
                                    const uint8_t *bitmap)
{
    uint8_t *dst = surface->pixels;
    lcd_update_window((uint8_t *)bitmap, dst, x, y, width, height);
}




static void *sdl_flush(void *arg)
{
    while (true)
    {
        usleep((1000 / 60) * 1000);
        //todo
        SDL_Texture *texture;
        texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_SetTextureBlendMode(texture, SDL_BLENDMODE_NONE);
        SDL_RenderCopy(renderer, texture, NULL, &_rect);
        SDL_RenderPresent(renderer);
        SDL_DestroyTexture(texture);
    }
}

void *rtk_gui_sdl(void *arg)
{
    int quit = 0;
    /* Enable standard application logging */
    SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);

    /* Load the SDL library */
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
    {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s\n", SDL_GetError());
        return NULL;
    }

    char str[50];
    sprintf(str, "RTKIOT GUI Simulator %d x %d", sim_get_width(), sim_get_hight());

    window = SDL_CreateWindow(str, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              sim_get_width(),
                              sim_get_hight(), 0);
    renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);


    /* Grab info about format that will be passed into OpenGL */
    if (DRV_PIXEL_BITS == 16)
    {
        SDL_PixelFormatEnumToMasks(SDL_PIXELFORMAT_RGB565, &bpp, &Rmask, &Gmask, &Bmask, &Amask);
    }
    else if (DRV_PIXEL_BITS == 32)
    {
        SDL_PixelFormatEnumToMasks(SDL_PIXELFORMAT_ARGB8888, &bpp, &Rmask, &Gmask, &Bmask, &Amask);
    }

    surface = SDL_CreateRGBSurface(0, sim_get_width(), sim_get_hight(), bpp, Rmask, Gmask, Bmask,
                                   Amask);
    SDL_RenderPresent(renderer);

    pthread_cond_signal(&sdl_ok_event);
    pthread_mutex_unlock(&sdl_ok_mutex);

    pthread_t thread;
    pthread_create(&thread, NULL, sdl_flush, NULL);

    SDL_Event event;
    while (true)
    {
        SDL_WaitEventTimeout(&event, 0xffffffff);
        switch (event.type)
        {
        case SDL_MOUSEMOTION:
            {
                /* save to (x,y) in the motion */
                pthread_mutex_lock(&input_mutex);
                mouse_x = event.motion.x;
                mouse_y = event.motion.y;
                pthread_mutex_unlock(&input_mutex);
            }
            break;

        case SDL_MOUSEBUTTONDOWN:
            {
                if (event.button.button == SDL_BUTTON_LEFT)
                {
                    pthread_mutex_lock(&input_mutex);
                    mouse_left_pressed = true;
                    pthread_mutex_unlock(&input_mutex);
                }
            }
            break;

        case SDL_MOUSEBUTTONUP:
            {
                if (event.button.button == SDL_BUTTON_LEFT)
                {
                    pthread_mutex_lock(&input_mutex);
                    mouse_left_pressed = false;
                    pthread_mutex_unlock(&input_mutex);
                }
            }
            break;
        case SDL_MOUSEWHEEL:
            {
                pthread_mutex_lock(&input_mutex);
                if (event.wheel.y > 0)
                {
                    encoder_diff--;
                }
                else if (event.wheel.y < 0)
                {
                    encoder_diff++;
                }
                encoder_state = 1;
                pthread_mutex_unlock(&input_mutex);
                usleep(10000);
                pthread_mutex_lock(&input_mutex);
                encoder_state = 0;
                pthread_mutex_unlock(&input_mutex);
            }
            break;
        case SDL_KEYDOWN:
            {
                pthread_mutex_lock(&input_mutex);
                switch (event.key.keysym.sym)
                {
                case SDLK_UP:        key_value = LV_KEY_UP; break;
                case SDLK_DOWN:      key_value = LV_KEY_DOWN; break;
                case SDLK_RIGHT:     key_value = LV_KEY_RIGHT; break;
                case SDLK_LEFT:      key_value = LV_KEY_LEFT; break;
                case SDLK_RETURN:    key_value = LV_KEY_ENTER; break;
                case SDLK_ESCAPE:    key_value = LV_KEY_ESC; break;
                case SDLK_DELETE:    key_value = LV_KEY_DEL; break;
                case SDLK_BACKSPACE: key_value = LV_KEY_BACKSPACE; break;
                case SDLK_TAB:       key_value = LV_KEY_NEXT; break;
                case SDLK_HOME:      key_value = (event.key.keysym.mod & KMOD_CTRL) ? LV_KEY_HOME : 0; break;
                case SDLK_END:       key_value = (event.key.keysym.mod & KMOD_CTRL) ? LV_KEY_END : 0; break;
                default:             key_value = 0; break;
                }
                pthread_mutex_unlock(&input_mutex);
            }
            break;
        case SDL_KEYUP:
            {
                pthread_mutex_lock(&input_mutex);
                key_value = 0;
                pthread_mutex_unlock(&input_mutex);
            }
            break;
        case SDL_QUIT:
            {
                SDL_Quit();
                quit = 1;
            }
            break;

        default:
            break;
        }
    }
}

__attribute__((constructor)) void gui_port_dc_init(void)
{
    printf("gui_port_dc_init\n");
    printf("gui_port_dc_init\n");
    printf("gui_port_dc_init\n");

    pthread_mutex_init(&sdl_ok_mutex, NULL);
    pthread_cond_init(&sdl_ok_event, NULL);

    pthread_t thread;
    pthread_create(&thread, NULL, rtk_gui_sdl, NULL);


    pthread_mutex_lock(&sdl_ok_mutex);
    pthread_cond_wait(&sdl_ok_event, &sdl_ok_mutex);


    pthread_mutex_destroy(&sdl_ok_mutex);
    pthread_cond_destroy(&sdl_ok_event);

}



