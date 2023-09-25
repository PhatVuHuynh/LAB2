/*
 * software_timer.h
 *
 *  Created on: Sep 25, 2023
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_counter[10];
extern int timer_flag[10];

void setTimer(int duration, int id);
void timerRun(int id);



#endif /* INC_SOFTWARE_TIMER_H_ */
