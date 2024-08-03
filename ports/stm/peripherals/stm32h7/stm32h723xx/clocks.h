// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Lucian Copeland for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#include "stm32h7xx_hal.h"

// Chip:                STM32H723
// Line Type:           Single-Core
// Speed:               550MHz (MAX)

// Defaults:
#ifndef CPY_CLK_VSCALE
#define CPY_CLK_VSCALE (PWR_REGULATOR_VOLTAGE_SCALE0)
#endif
#ifndef CPY_CLK_PLLM
#define CPY_CLK_PLLM (2)
#endif
#ifndef CPY_CLK_PLLN
#define CPY_CLK_PLLN (44)
#endif
#ifndef CPY_CLK_PLLP
#define CPY_CLK_PLLP (1)
#endif
#ifndef CPY_CLK_PLLQ
#define CPY_CLK_PLLQ (2)
#endif
#ifndef CPY_CLK_PLLR
#define CPY_CLK_PLLR (2)
#endif
#ifndef CPY_CLK_AHBDIV
#define CPY_CLK_AHBDIV (RCC_HCLK_DIV2)
#endif
#ifndef CPY_CLK_APB1DIV
#define CPY_CLK_APB1DIV (RCC_APB1_DIV2)
#endif
#ifndef CPY_CLK_APB2DIV
#define CPY_CLK_APB2DIV (RCC_APB2_DIV2)
#endif
#ifndef CPY_CLK_APB3DIV
#define CPY_CLK_APB3DIV (RCC_APB3_DIV2)
#endif
#ifndef CPY_CLK_APB4DIV
#define CPY_CLK_APB4DIV (RCC_APB4_DIV2)
#endif
#ifndef CPY_CLK_FLASH_LATENCY
#define CPY_CLK_FLASH_LATENCY (FLASH_LATENCY_3)
#endif
#ifndef CPY_CLK_USB_USES_AUDIOPLL
#define CPY_CLK_USB_USES_AUDIOPLL (1)
#endif
#ifndef BOARD_HSE_SOURCE
#define BOARD_HSE_SOURCE (RCC_HSE_ON)
#endif
