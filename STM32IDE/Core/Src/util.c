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

//Ex8
void setNumberOnClock(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_GREEN_4_GPIO_Port, LED_GREEN_4_Pin, 0);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_YELLOW_4_GPIO_Port, LED_YELLOW_4_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_RED_4_GPIO_Port, LED_RED_4_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 0);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 0);
		break;
	case 10:
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_GREEN_1_Pin, 0);
		break;
	case 11:
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
		break;
	default:
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
		break;
	}
}

//Ex9
void clearNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_GREEN_4_GPIO_Port, LED_GREEN_4_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_YELLOW_4_GPIO_Port, LED_YELLOW_4_Pin, 1);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_RED_4_GPIO_Port, LED_RED_4_Pin, 1);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, 1);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, 1);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, 1);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 1);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 1);
			break;
		case 10:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_GREEN_1_Pin, 1);
			break;
		case 11:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 1);
			break;
		default:
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 1);
			break;
		}
}

//---------- .................... ----------
