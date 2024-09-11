/*
 * ex1.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */

#include "ex1.h"

//---------- Functions Definition ----------

void init_ex1(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
}

void run_ex1(){
	static int i = 0;
	if(i >= 0 && i < SEC){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
	}
	if(i >= SEC && i < (SEC*2)){
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
	}
	i = (i + 1)%(SEC*2);
}

//---------- .................... ----------



