/*
 * ex2.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */

#include "ex2.h"

//---------- Functions Definition ----------

void init_ex2(){
	__TURN_OFF_LED__(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
	__TURN_OFF_LED__(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
	__TURN_OFF_LED__(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
}

void run_ex2(){
	static int i = RED + GREEN + YELLOW;
	if(i <= COUNT && i > (COUNT - RED)){
		__TURN_ON_LED__(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
		__TURN_OFF_LED__(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
		__TURN_OFF_LED__(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
	}
	if(i <= (COUNT - RED) && i > YELLOW){
		__TURN_OFF_LED__(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
		__TURN_OFF_LED__(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
		__TURN_ON_LED__(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
	}
	if(i <= YELLOW && i > 0){
		__TURN_OFF_LED__(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
		__TURN_ON_LED__(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
		__TURN_OFF_LED__(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
	}
	if(i == 1){
		i = COUNT + 1;
	}
	i = i - 1;
}

//By default, this functions sets the output pin to HIGH
void __TURN_ON_LED__(GPIO_TypeDef* Type, uint16_t Pin){
	HAL_GPIO_WritePin(Type, Pin, GPIO_PIN_RESET);
}

//By default, this functions sets the output pin to LOW
void __TURN_OFF_LED__(GPIO_TypeDef* Type, uint16_t Pin){
	HAL_GPIO_WritePin(Type, Pin, GPIO_PIN_SET);
}


//---------- .................... ----------


