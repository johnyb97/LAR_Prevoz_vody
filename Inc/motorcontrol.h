/*
 * motorcontrol.h
 *
 *  Created on: Mar 13, 2019
 *      Author: janbe
 */

#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_
#include "main.h"


int distance1; //po�et pooto�en� o �hel encoderu...pozor bude se li�it p�i zapojen� v�ech 4 enkod�r� a jen 2...
int distance2; //po�et pooto�en� o �hel encoderu...pozor bude se li�it p�i zapojen� v�ech 4 enkod�r� a jen 2...

void start_motor_control(TIM_HandleTypeDef *htim);
void set_speed(TIM_HandleTypeDef *htim,int speedrigth,int speedleft);
int set_motor_speed(TIM_HandleTypeDef *htim,int speedrigth,int speedleft);
void PID_regularor(TIM_HandleTypeDef *htim);
void init_PID(void);
void init_PID_ultrazvuk(void);
int distance_traveled(int wheel);
void reset_distance(void);
void start_encoder();
void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim);
int Travel_rovne(TIM_HandleTypeDef *htim,int vzdalenost,int power);
int Travel_turn(TIM_HandleTypeDef *htim2,int uhel,int power);
int saturation(int variable);

#endif /* MOTORCONTROL_H_ */
