/*
 * ex4.c
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */

#include "ex4.h"

//---------- Functions Definition ----------

void init_ex4(){
	HAL_GPIO_WritePin(SEG71_1_GPIO_Port, SEG71_1_Pin, 1);
	HAL_GPIO_WritePin(SEG71_2_GPIO_Port, SEG71_2_Pin, 1);
	HAL_GPIO_WritePin(SEG71_3_GPIO_Port, SEG71_3_Pin, 1);
	HAL_GPIO_WritePin(SEG71_4_GPIO_Port, SEG71_4_Pin, 1);
	HAL_GPIO_WritePin(SEG71_5_GPIO_Port, SEG71_5_Pin, 1);
	HAL_GPIO_WritePin(SEG71_6_GPIO_Port, SEG71_6_Pin, 1);
	HAL_GPIO_WritePin(SEG71_7_GPIO_Port, SEG71_7_Pin, 1);
}

void display7SEG(int count){
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

//---------- .................... ----------


