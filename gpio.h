#ifndef GPIO_H
#define GPIO_H



#include<stdint.h>
#include<stm32f4xx.h>
#include<stdbool.h>

#define TIM2_SR_UIF   (1u<<0)
void Gpio_D_Init(void);
void Led_On(void);
void Led_Off(void);
void Tim2_Init(void);

#endif
