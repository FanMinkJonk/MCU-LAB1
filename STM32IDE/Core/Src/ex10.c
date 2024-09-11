/*
 * ex10.c
 *
 *  Created on: Sep 12, 2024
 *      Author: ACER
 */

#include "ex10.h"

//---------- Init Extern Variables ----------

int sec = INIT_SECOND;
int min = INIT_MINUTE;
int hrs = INIT_HOUR;

//---------- ..................... ----------

//---------- Functions Definition ----------

void init_ex10(){
	clearAllClock();
	setNumberOnClock((sec/5)-1);
	setNumberOnClock((min/5)-1);
	setNumberOnClock((hrs%12-1));
}

void run_ex10(){
	static int prev_sec = INIT_SECOND -1;
	static int prev_min = INIT_MINUTE -1;
	static int prev_hrs = INIT_HOUR -1;
	if(sec%5==0){
		clearNumberOnClock((prev_sec/5) -1);
		prev_sec = sec;
	}
	if(min%5==0){
		clearNumberOnClock((prev_min/5) -1);
		prev_min = min;
	}
	if(min == 0 && sec == 0){
		clearNumberOnClock((prev_hrs%12) -1);
		prev_hrs = hrs;
	}
	setNumberOnClock((sec/5)-1);
	setNumberOnClock((min/5)-1);
	setNumberOnClock((hrs%12)-1);
	sec = sec + 1;
	if(sec >= 60){
		sec = 0;
		min = min + 1;
	}
	if(min >= 60){
		min = 0;
		hrs  = hrs + 1;
	}
	if(hrs == 24){
		hrs = 0;
	}
}

//---------- .................... ----------

