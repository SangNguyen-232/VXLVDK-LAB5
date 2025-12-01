/*
 * software_timer.c
 *
 *  Created on: 1 thg 12, 2025
 *      Author: Admin
 */

#include "software_timer.h"

#define TIMER_TICK 10
#define NUM_TIMERS 5

enum TimerID {
    TIMER_1 = 0,
    TIMER_2,
    TIMER_3,
    TIMER_4,
    TIMER_5
};

static int timer_counters[NUM_TIMERS] = {0};
int timer_flag[5] = {0};

void configureTimer1(int length) {
    timer_counters[TIMER_1] = length / TIMER_TICK;
    timer_flag[TIMER_1] = 0;
}

void setTimer1(int length) {
    configureTimer1(length);
}

void configureTimer2(int length) {
    timer_counters[TIMER_2] = length / TIMER_TICK;
    timer_flag[TIMER_2] = 0;
}

void setTimer2(int length) {
    configureTimer2(length);
}

void configureTimer3(int length) {
    timer_counters[TIMER_3] = length / TIMER_TICK;
    timer_flag[TIMER_3] = 0;
}

void configureTimer4(int length) {
    timer_counters[TIMER_4] = length / TIMER_TICK;
    timer_flag[TIMER_4] = 0;
}

void configureTimer5(int length) {
    timer_counters[TIMER_5] = length / TIMER_TICK;
    timer_flag[TIMER_5] = 0;
}

void clearTimer2() {
    timer_counters[TIMER_2] = 0;
    timer_flag[TIMER_2] = 0;
}

void processTimers() {
    for (int i = 0; i < NUM_TIMERS; i++) {
        if (timer_counters[i] > 0) {
            timer_counters[i]--;
            if (timer_counters[i] <= 0) {
                timer_flag[i] = 1;
            }
        }
    }
}
