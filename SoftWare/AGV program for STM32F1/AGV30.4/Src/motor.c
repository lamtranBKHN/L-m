//-----------------------------------------------------BKHN------------------------------------------------//
//---------------------------------------------------AGV_Ver_2---------------------------------------------//
//---------------------------------------------------Lam_Tran----------------------------------------------//
#include "stm32f1xx_hal.h"
#include "motor.h"
void motorLeftForward(uint32_t speed) {
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, speed*10834);
}
void motorLeftBackward(uint32_t speed) {
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, speed*10834);
}
void motorRightForward(uint32_t speed) {
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_4);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_3);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_3, speed*10834);
}
void motorRightBackward(uint32_t speed) {
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_3);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_4, speed*10834);
}
void motorStop(){
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_1);
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_2);
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_3);
	HAL_TIM_PWM_Stop(&htim3, TIM_CHANNEL_4);
}