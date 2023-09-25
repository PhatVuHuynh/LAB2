/*
 * software_timer.c
 *
 *  Created on: Sep 25, 2023
 *      Author: ADMIN
 */

#include "software_timer.h"

int timer_counter[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int timer_flag[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void setTimer(int duration, int id){
	timer_counter[id] = duration;
	timer_flag[id] = 0;
}

void timerRun(int id){
	if(timer_counter[id] > 0){
		timer_counter[id]--;
		if(timer_counter[id] <= 0){
			timer_flag[id] = 1;
		}
	}
}

//for(int i = 0; i < 10; ++i){
//	timer_flag[i] = 0;
//}


