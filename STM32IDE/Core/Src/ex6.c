/*
 * ex6.c
 *
 *  Created on: Sep 12, 2024
 *      Author: ACER
 */

#include "ex6.h"

//---------- Functions Definition ----------

void init_ex6(){
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

void run_ex6(){
	static int counter = 0;
	switch(counter){
	case 0:
		HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
		break;
	case 1:
		HAL_GPIO_TogglePin(LED_GREEN_4_GPIO_Port, LED_GREEN_4_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(LED_YELLOW_4_GPIO_Port, LED_YELLOW_4_Pin);
		break;
	case 3:
		HAL_GPIO_TogglePin(LED_RED_4_GPIO_Port, LED_RED_4_Pin);
		break;
	case 4:
		HAL_GPIO_TogglePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin);
		break;
	case 5:
		HAL_GPIO_TogglePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin);
		break;
	case 6:
		HAL_GPIO_TogglePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin);
		break;
	case 7:
		HAL_GPIO_TogglePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin);
		break;
	case 8:
		HAL_GPIO_TogglePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin);
		break;
	case 9:
		HAL_GPIO_TogglePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin);
		break;
	case 10:
		HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_GREEN_1_Pin);
		break;
	case 11:
		HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
		break;
	}
	counter = (counter+1)%12;
}

