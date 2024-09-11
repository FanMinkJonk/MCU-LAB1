/*
 * util.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */

#include "util.h"

//---------- Functions Definition ----------

//Ex7
void clearAllClock(){
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 1);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 1);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 1);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 1);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 1);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 1);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, 1);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, 1);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, 1);
	HAL_GPIO_WritePin(LED_RED_4_GPIO_Port, LED_RED_4_Pin, 1);
	HAL_GPIO_WritePin(LED_YELLOW_4_GPIO_Port, LED_YELLOW_4_Pin, 1);
	HAL_GPIO_WritePin(LED_GREEN_4_GPIO_Port, LED_GREEN_4_Pin, 1);
}

//---------- .................... ----------
