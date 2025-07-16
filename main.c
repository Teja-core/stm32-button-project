
#include "gpio.h"

void delay_ms(int ms){
	while(ms--){
		while(!(TIM2->SR & TIM2_SR_UIF));
		TIM2->SR &= ~(TIM2_SR_UIF);
	}
}
		
int main(){
	Gpio_D_Init();
	Tim2_Init();
	while(1){
		Led_On();
		delay_ms(1);
		Led_Off();
		delay_ms(1);
	}
}
