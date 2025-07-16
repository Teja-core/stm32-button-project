#include "gpio.h"

#define GPIOAENR (1u<<0)
#define GPIOBENR (1u<<1)
#define GPIOCENR (1u<<2)
#define GPIODENR (1u<<3)

#define TIM2EN        (1u<<0)
#define TIM2_CR1_CEN  (1u<<0)
#define TIM2_SR_UIF   (1u<<0)

void Gpio_D_Init(){
	RCC->AHB1ENR |= GPIODENR;
	GPIOD->MODER |= (1U<<24);
	GPIOD->MODER &=~(1U<<25);
}

void Led_On(){
	GPIOD->ODR |=(1u<<12);
}

void Led_Off(){
	GPIOD->ODR &=~(1u<<12);
}

void Tim2_Init(){
	RCC->APB1ENR |=TIM2EN;
	TIM2->PSC=15999;
	TIM2->ARR=999;
	TIM2->CNT=0;
	
	TIM2->CR1|=TIM2_CR1_CEN;
}
