/*
 * Bluetooth.c
 *
 *  Created on: Apr 5, 2019
 *      Author: janbe
 */

#include "bluetooth.h"
uint8_t bluetooth_memory;

uint8_t get_bluetooth(void){
	return bluetooth_memory;
}

void start_bluetooth(UART_HandleTypeDef *huart){
      HAL_UART_Init(huart);
	  HAL_UART_Transmit_IT(huart,&bluetooth_memory,1);
	  HAL_Delay(1000);
	  HAL_UART_Receive_IT(huart,&bluetooth_memory,1);
}
uint8_t* interupt_bluetooth_return(void){
	return &bluetooth_memory;
}
