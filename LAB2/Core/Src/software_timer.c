/*
 * software_timer.c
 *
 *  Created on: Sep 25, 2023
 *      Author: ADMIN
 */

#include "software_timer.h"

int timer_counter[2] = {0, 0};//, 0, 0, 0, 0, 0, 0, 0, 0};
int timer_flag[2] = {0, 0};//, 0, 0, 0, 0, 0, 0, 0, 0};

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

//int timer_counter = 0;
//int timer_flag = 0;
//
//void setTimer(int duration){
//	timer_counter = duration;
//	timer_flag = 0;
//}
//
//void timerRun(){
//	if(timer_counter > 0){
//		timer_counter--;
//		if(timer_counter <= 0){
//			timer_flag = 1;
//		}
//	}
//}


