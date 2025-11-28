/* SPDX-License-Identifier: GPL-2.0 */
#ifndef S5E8825_CCLK_GPU_H
#define S5E8825_CCLK_GPU_H

#define GPU_FREQ_STOCK_KHZ_MAX (800000)
#ifndef CPU_MAX
#define CPU_MAX INT_MAX
#endif

/* GPU Clocks */
#ifdef CONFIG_SOC_S5E8825_GPU_OC // Overclocked frequencies
/* Max frequency for the GPU */
#define GPU_FREQ_KHZ_MAX (921000)
#define GPU_FREQ_KHZ_MIN (156000)

static const unsigned int gpu_custom_clock[] = {921000, 800000, 767000, 702000, 572000, 507000, 455000, 377000, 260000, 156000};
static const unsigned int gpu_custom_min_threshold[] = {85, 82, 80, 79, 78, 70, 60, 50, 30, 0};
static const unsigned int gpu_custom_max_threshold[] = {100, 95, 93, 90, 87, 85, 80, 70, 60, 40};
static const unsigned int gpu_custom_staycount[] = {5, 5, 5, 5, 5, 3, 3, 2, 2, 1};
static const unsigned int gpu_custom_mem_freq[] = {2730000, 2730000, 1539000, 1352000, 1352000, 1014000, 1014000, 845000, 676000, 676000};
static const unsigned int gpu_custom_lit[] = {1300000, 1053000, 1053000, 1053000, 1053000, 1053000, 0, 0, 0, 0};
static const unsigned int gpu_custom_mid = 0;
static const unsigned int gpu_custom_big = CPU_MAX;

#else // Stock frequencies
/* Max frequency for the GPU */
#define GPU_FREQ_KHZ_MAX (800000)
#define GPU_FREQ_KHZ_MIN (156000)

/* DVFS table converted to arrays */
static const unsigned int gpu_custom_clock[] = {800000, 767000, 702000, 572000, 507000, 455000, 377000, 260000, 156000};
static const unsigned int gpu_custom_min_threshold[] = {78, 78, 78, 78, 70, 60, 50, 30, 0};
static const unsigned int gpu_custom_max_threshold[] = {100, 95, 95, 95, 90, 80, 70, 60, 40};
static const unsigned int gpu_custom_staycount[] = {5, 5, 5, 5, 3, 3, 2, 2, 1};
static const unsigned int gpu_custom_mem_freq[] = {2730000, 1539000, 1352000, 1352000, 1014000, 1014000, 845000, 676000, 676000};
static const unsigned int gpu_custom_lit[] = {1053000, 1053000, 1053000, 1053000, 1053000, 0, 0, 0, 0};
static const unsigned int gpu_custom_mid = 0;
static const unsigned int gpu_custom_big = CPU_MAX;
#endif

static const int gpu_custom_array_size = sizeof(gpu_custom_clock) / sizeof(gpu_custom_clock[0]);

#endif
