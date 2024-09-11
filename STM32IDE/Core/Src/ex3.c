/*
 * ex3.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */
#include "ex3.h"

//---------- Functions Definition ----------

void init_ex3(){
	Traffic_Light_1(1,1,1);
	Traffic_Light_2(1,1,1);
	Traffic_Light_3(1,1,1);
	Traffic_Light_4(1,1,1);
}

void run_ex3(){
	static int s = 0;
	static int count = RED;
	switch(s){
	case HORIZONTAL_STOP:
		if(count > YELLOW){
			Traffic_Light_1(1,1,0);
			Traffic_Light_2(0,1,1);
			Traffic_Light_3(1,1,0);
			Traffic_Light_4(0,1,1);
		}
		if(YELLOW >= count && count > 0){
			Traffic_Light_1(1,0,1);
			Traffic_Light_2(0,1,1);
			Traffic_Light_3(1,0,1);
			Traffic_Light_4(0,1,1);
		}
		if(count == 1){
			s = 0;
			count = RED + 1;
		}
		count = count - 1;
		break;
	case VERTICAL_STOP:
		if(count > YELLOW){
			Traffic_Light_1(0,1,1);
			Traffic_Light_2(1,1,0);
			Traffic_Light_3(0,1,1);
			Traffic_Light_4(1,1,0);
		}
		if(YELLOW >= count && count > 0){
			Traffic_Light_1(0,1,1);
			Traffic_Light_2(1,0,1);
			Traffic_Light_3(0,1,1);
			Traffic_Light_4(1,0,1);
		}
		if(count == 1){
			s = 1;
			count = RED + 1;
		}
		count = count - 1;
		break;
	}
}

//Toggle traffic light 1
//0 is On, 1 is Off
void Traffic_Light_1(int red /*Red Light*/, int yellow /*Yellow Light*/, int green /*Green Light*/){
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, red);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, yellow);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, green);
}

//Toggle traffic light 2
//0 is On, 1 is Off
void Traffic_Light_2(int red /*Red Light*/, int yellow /*Yellow Light*/, int green /*Green Light*/){
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, red);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, yellow);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, green);
}

//Toggle traffic light 3
//0 is On, 1 is Off
void Traffic_Light_3(int red /*Red Light*/, int yellow /*Yellow Light*/, int green /*Green Light*/){
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, red);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, yellow);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, green);
}

//Toggle traffic light 4
//0 is On, 1 is Off
void Traffic_Light_4(int red /*Red Light*/, int yellow /*Yellow Light*/, int green /*Green Light*/){
	HAL_GPIO_WritePin(LED_RED_4_GPIO_Port, LED_RED_4_Pin, red);
	HAL_GPIO_WritePin(LED_YELLOW_4_GPIO_Port, LED_YELLOW_4_Pin, yellow);
	HAL_GPIO_WritePin(LED_GREEN_4_GPIO_Port, LED_GREEN_4_Pin, green);
}

//---------- .................... ----------


