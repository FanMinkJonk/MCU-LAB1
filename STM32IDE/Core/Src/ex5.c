/*
 * ex5.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */

#include "ex5.h"

//---------- Functions Definition ----------

void init_ex5(){
	HAL_GPIO_WritePin(SEG72_1_GPIO_Port, SEG72_1_Pin,1);
	HAL_GPIO_WritePin(SEG72_2_GPIO_Port, SEG72_2_Pin,1);
	HAL_GPIO_WritePin(SEG72_3_GPIO_Port, SEG72_3_Pin,1);
	HAL_GPIO_WritePin(SEG72_4_GPIO_Port, SEG72_4_Pin,1);
	HAL_GPIO_WritePin(SEG72_5_GPIO_Port, SEG72_5_Pin,1);
	HAL_GPIO_WritePin(SEG72_6_GPIO_Port, SEG72_6_Pin,1);
	HAL_GPIO_WritePin(SEG72_7_GPIO_Port, SEG72_7_Pin,1);
	HAL_GPIO_WritePin(SEG71_1_GPIO_Port, SEG71_1_Pin,1);
	HAL_GPIO_WritePin(SEG71_2_GPIO_Port, SEG71_2_Pin,1);
	HAL_GPIO_WritePin(SEG71_3_GPIO_Port, SEG71_3_Pin,1);
	HAL_GPIO_WritePin(SEG71_4_GPIO_Port, SEG71_4_Pin,1);
	HAL_GPIO_WritePin(SEG71_5_GPIO_Port, SEG71_5_Pin,1);
	HAL_GPIO_WritePin(SEG71_6_GPIO_Port, SEG71_6_Pin,1);
	HAL_GPIO_WritePin(SEG71_7_GPIO_Port, SEG71_7_Pin,1);
	Traffic_Light_1(1,1,1);
	Traffic_Light_2(1,1,1);
	Traffic_Light_3(1,1,1);
	Traffic_Light_4(1,1,1);
}

void run_ex5(){
	static int s = 0;
	static int count = RED;
	switch(s){
	case HORIZONTAL_STOP:
		if(count > YELLOW){
			Traffic_Light_1(1,1,0);
			Traffic_Light_2(0,1,1);
			Traffic_Light_3(1,1,0);
			Traffic_Light_4(0,1,1);
			display7SEG2((count - RED + GREEN));
		}
		if(YELLOW >= count && count > 0){
			Traffic_Light_1(1,0,1);
			Traffic_Light_2(0,1,1);
			Traffic_Light_3(1,0,1);
			Traffic_Light_4(0,1,1);
			display7SEG2(count);
		}
		display7SEG1(count);
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
			display7SEG1((count - RED + GREEN));
		}
		if(YELLOW >= count && count > 0){
			Traffic_Light_1(0,1,1);
			Traffic_Light_2(1,0,1);
			Traffic_Light_3(0,1,1);
			Traffic_Light_4(1,0,1);
			display7SEG1(count);
		}
		display7SEG2(count);
		if(count == 1){
			s = 1;
			count = RED + 1;
		}
		count = count - 1;
		break;
	}
}

void display7SEG1(int count){
	int a[10][7] = {{0,0,0,0,0,0,1}, //0
					{1,0,0,1,1,1,1}, //1
					{0,0,1,0,0,1,0}, //2
					{0,0,0,0,1,1,0}, //3
					{1,0,0,1,1,0,0}, //4
					{0,1,0,0,1,0,0}, //5
					{0,1,0,0,0,0,0}, //6
					{0,0,0,1,1,1,1}, //7
					{0,0,0,0,0,0,0}, //8
					{0,0,0,0,1,0,0}};//9
	HAL_GPIO_WritePin(SEG71_1_GPIO_Port, SEG71_1_Pin, a[count][0]);
	HAL_GPIO_WritePin(SEG71_2_GPIO_Port, SEG71_2_Pin, a[count][1]);
	HAL_GPIO_WritePin(SEG71_3_GPIO_Port, SEG71_3_Pin, a[count][2]);
	HAL_GPIO_WritePin(SEG71_4_GPIO_Port, SEG71_4_Pin, a[count][3]);
	HAL_GPIO_WritePin(SEG71_5_GPIO_Port, SEG71_5_Pin, a[count][4]);
	HAL_GPIO_WritePin(SEG71_6_GPIO_Port, SEG71_6_Pin, a[count][5]);
	HAL_GPIO_WritePin(SEG71_7_GPIO_Port, SEG71_7_Pin, a[count][6]);
}

void display7SEG2(int count){
	int a[10][7] = {{0,0,0,0,0,0,1}, //0
					{1,0,0,1,1,1,1}, //1
					{0,0,1,0,0,1,0}, //2
					{0,0,0,0,1,1,0}, //3
					{1,0,0,1,1,0,0}, //4
					{0,1,0,0,1,0,0}, //5
					{0,1,0,0,0,0,0}, //6
					{0,0,0,1,1,1,1}, //7
					{0,0,0,0,0,0,0}, //8
					{0,0,0,0,1,0,0}};//9
	HAL_GPIO_WritePin(SEG72_1_GPIO_Port, SEG72_1_Pin, a[count][0]);
	HAL_GPIO_WritePin(SEG72_2_GPIO_Port, SEG72_2_Pin, a[count][1]);
	HAL_GPIO_WritePin(SEG72_3_GPIO_Port, SEG72_3_Pin, a[count][2]);
	HAL_GPIO_WritePin(SEG72_4_GPIO_Port, SEG72_4_Pin, a[count][3]);
	HAL_GPIO_WritePin(SEG72_5_GPIO_Port, SEG72_5_Pin, a[count][4]);
	HAL_GPIO_WritePin(SEG72_6_GPIO_Port, SEG72_6_Pin, a[count][5]);
	HAL_GPIO_WritePin(SEG72_7_GPIO_Port, SEG72_7_Pin, a[count][6]);
}



