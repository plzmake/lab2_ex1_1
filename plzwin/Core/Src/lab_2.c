/*
 * lab_2.c
 *
 *  Created on: Oct 7, 2022
 *      Author: Admin
 */

#include "lab_2.h"
int Timer1_flag =0;
int Timer1_c = 0;
 void Settimer1(int du)
 {Timer1_c =du;
 Timer1_flag=0;
 }
 void TimerRun()
 {
	 if(Timer1_c > 0){
		 Timer1_c--;
		 if(Timer1_c == 0){
			 Timer1_flag = 1;
		 }
	 }
 }
 ;
