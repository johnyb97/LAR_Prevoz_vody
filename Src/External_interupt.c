/*
 * External_interupt.c
 *
 *  Created on: Apr 5, 2019
 *      Author: janbe
 */

#include "Ultrasound.h"
#include "motorcontrol.h"
#include "main.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{

	if (GPIO_Pin == Utrasound_sens1_Pin){
		if (HAL_GPIO_ReadPin(Utrasound_sens1_GPIO_Port, Utrasound_sens1_Pin) == GPIO_PIN_RESET){
			dist1 = (dist1 + TIM_ultrasound->Instance->CNT)/2;
			//htim22.Instance->CNT = 0;
			logic1 =1;
		}
	}
	if (GPIO_Pin == Utrasound_sens2_Pin){
			if (HAL_GPIO_ReadPin(Utrasound_sens2_GPIO_Port, Utrasound_sens2_Pin) == GPIO_PIN_RESET){
				dist2 = (dist2 + TIM_ultrasound->Instance->CNT)/2;
				//htim22.Instance->CNT = 0;
				logic2 =1;
			}
		}
	if (GPIO_Pin == EncoderRigth1_Pin){
		if (HAL_GPIO_ReadPin(EncoderRigth1_GPIO_Port, EncoderRigth1_Pin) == GPIO_PIN_SET){
			distance2++; //posun o dan� �hel
		}
	}
	if (GPIO_Pin == EncoderLeft1_Pin){
		if (HAL_GPIO_ReadPin(EncoderLeft1_GPIO_Port, EncoderLeft1_Pin) == GPIO_PIN_SET){
			distance1++; //posun o dan� �hel
		}
	}
	if (GPIO_Pin == Mikrofon1_Pin){
			if (HAL_GPIO_ReadPin(EncoderLeft1_GPIO_Port, EncoderLeft1_Pin) == GPIO_PIN_SET){
				 //
			}
		}
}
