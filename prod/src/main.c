#include <stdio.h>
#include "stm32f429xx.h"

int main(void){
    /*int a = 3;
    int b = 4;
    char str[] = "Hello there!!!!!!!!!!";
    printf("%d %d %s", a, b, str);
*/
    RCC -> AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
    GPIOB -> MODER = 0x10000000;
    GPIOB -> OTYPER = 0; 
    GPIOB -> OSPEEDR = 0; 
    GPIOB -> ODR = 0x4000;

    while (1){}
    return 0;
}