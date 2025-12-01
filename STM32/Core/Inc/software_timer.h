/*
 * software_timer.h
 *
 *  Created on: 1 thg 12, 2025
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"


extern int timer_flag[5];

void configureTimer1(int length);
void configureTimer2(int length);
void configureTimer3(int length);
void configureTimer4(int length);
void configureTimer5(int length);

void setTimer1(int length);
void setTimer2(int length);

void clearTimer2();

void processTimers();

#define timer1_flag timer_flag[0]
#define timer2_flag timer_flag[1]

#endif /* INC_SOFTWARE_TIMER_H_ */
