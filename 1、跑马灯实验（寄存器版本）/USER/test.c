#include "stm32f10x.h"
#include "LED.h"
#include "delay.h"

int main(void){
	delay_init();
	LED_Init();

	while(1){
		GPIOB->ODR=1<<5;
		GPIOE->ODR=1<<5;
		delay_ms(500);
		
		GPIOB->ODR=~(1<<5);
		GPIOE->ODR=~(1<<5);
		delay_ms(500);
	}
}

