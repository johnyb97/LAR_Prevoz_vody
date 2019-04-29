/*
 * Cerpadlo.h
 *
 *  Created on: Apr 29, 2019
 *      Author: janbe
 */

#ifndef CERPADLO_H_
#define CERPADLO_H_

#include "main.h"
#define nahoru 1
#define dolu 0
#define max_rychlost_cerpadla  7
#define cerpadlo_timeout 100

int distance_cerpadlo; //po�et pooto�en� o �hel encoderu...pozor bude se li�it p�i zapojen� v�ech 4 enkod�r� a jen 2...

void reset_poss_cerpadla(void);
void posun_cerpadla(uint8_t smer);
void start_cerpadlo_control(void);
void start_cerpani_v_nadrzi(int time);
void start_cerpani_v_rameni(int time);

#endif /* CERPADLO_H_ */
