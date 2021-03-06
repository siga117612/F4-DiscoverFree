/*
 * button.h
 *
 * Created on: Nov 26, 2012
 *     Author: Ekawahyu Susilo
 *
 * Copyright (c) 2012, Chongqing Aisenke Electronic Technology Co., Ltd.
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 * 
 * The views and conclusions contained in the software and documentation are
 * those of the authors and should not be interpreted as representing official
 * policies, either expressed or implied, of the copyright holder.
 * 
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"

typedef enum
{
	BUTTON_S1, /* Button S1 is hardware RESET and will not be initialized */
	BUTTON_S2,
	BUTTON_S3,
	BUTTON_S4,
	BUTTON_S5,
	BUTTON_S6,
	BUTTON_S7,
	BUTTON_S8,
	BUTTON_S9,
	BUTTON_S10,
	BUTTONn
} button_t;

typedef enum
{
	BUTTON_MODE_PULLUP,
	BUTTON_MODE_PULLDOWN,
	BUTTON_MODE_NOPULL,
	BUTTON_MODE_OPENDRAIN,
	BUTTON_MODEn
} button_mode_t;

#define BUTTON_S1_PIN					0 /* N/A */
#define BUTTON_S1_GPIO					0 /* N/A */
#define BUTTON_S1_GPIO_CLK				0 /* N/A */

#define BUTTON_S2_PIN					GPIO_Pin_0
#define BUTTON_S2_GPIO					GPIOA
#define BUTTON_S2_GPIO_CLK				RCC_AHB1Periph_GPIOA

#define BUTTON_S3_PIN					GPIO_Pin_0
#define BUTTON_S3_GPIO					GPIOG
#define BUTTON_S3_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S4_PIN					GPIO_Pin_1
#define BUTTON_S4_GPIO					GPIOG
#define BUTTON_S4_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S5_PIN					GPIO_Pin_2
#define BUTTON_S5_GPIO					GPIOG
#define BUTTON_S5_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S6_PIN					GPIO_Pin_3
#define BUTTON_S6_GPIO					GPIOG
#define BUTTON_S6_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S7_PIN					GPIO_Pin_4
#define BUTTON_S7_GPIO					GPIOG
#define BUTTON_S7_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S8_PIN					GPIO_Pin_5
#define BUTTON_S8_GPIO					GPIOG
#define BUTTON_S8_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S9_PIN					GPIO_Pin_6
#define BUTTON_S9_GPIO					GPIOG
#define BUTTON_S9_GPIO_CLK				RCC_AHB1Periph_GPIOG

#define BUTTON_S10_PIN					GPIO_Pin_7
#define BUTTON_S10_GPIO					GPIOG
#define BUTTON_S10_GPIO_CLK				RCC_AHB1Periph_GPIOG

int16_t button_config(button_t button);
int16_t button_deconfig(button_t button);
int16_t button_getstate(button_t button);
int16_t button_config_with_mode(button_t button, button_mode_t mode);

#ifdef __cplusplus
}
#endif

#endif /* BUTTON_H_ */
