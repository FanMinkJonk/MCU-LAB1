/*
 * ex2.h
 *
 *  Created on: Sep 11, 2024
 *      Author: ACER
 */

#ifndef INC_EX2_H_
#define INC_EX2_H_

#include "main.h"

//---------- Additional Functions ----------

void init_ex2();
void run_ex2();
void __TURN_ON_LED__(GPIO_TypeDef*, uint16_t);
void __TURN_OFF_LED__(GPIO_TypeDef*, uint16_t);

//---------- .................... ----------

//---------- Private Defines ----------

#define RED 5
#define YELLOW 2
#define GREEN 3
#define COUNT (RED + YELLOW + GREEN)

//---------- ............... ----------


#endif /* INC_EX2_H_ */
