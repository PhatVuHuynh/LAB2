/*
 * led.h
 *
 *  Created on: Oct 23, 2023
 *      Author: ADMIN
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "stm32f1xx_hal.h"
//#include<stdint.h>

extern const uint8_t chu_cai[208];

void updateLEDMatrix(uint8_t *buffer, int index);

#endif /* INC_LED_H_ */
