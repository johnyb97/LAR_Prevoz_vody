/*
 * motorcontrol.h
 *
 *  Created on: Mar 13, 2019
 *      Author: janbe
 */

#ifndef MOTORCONTROL_H_
#define MOTORCONTROL_H_
#include "main.h"

int set_speed_rigth;
int set_speed_left;
int16_t speed1;
int16_t speed2;
int16_t speed3;
int16_t speed4;


int distance1; //poèet pootoèení o úhel encoderu...pozor bude se lišit pøi zapojení všech 4 enkodérù a jen 2...
int distance2; //poèet pootoèení o úhel encoderu...pozor bude se lišit pøi zapojení všech 4 enkodérù a jen 2...
uint16_t chan1; //cas za jaky se posunulo kolo o úhel...pùjde zpøesnit když pøidáme 4 kanály ale zatím snad staèí tak
uint16_t chan2; //cas za jaky se posunulo kolo o úhel...pùjde zpøesnit když pøidáme 4 kanály ale zatím snad staèí tak

int response;
uint8_t a;
uint8_t b;
int Kp;
float Ki;
int	Kd;
float Integral;
float LastError;
float Derivate;
int pow1;
int pow2;
int otacky1;
int otacky2;
float error;
float Turn;
uint32_t timer;
uint32_t timer2;
int Kp2;
float Ki2;
int	Kd2;
float Integral2;
float LastError2;
float Derivate2;
int etalon;

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
