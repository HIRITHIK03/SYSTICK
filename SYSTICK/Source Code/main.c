#include <stdint.h>
#include "GPIO_N_Init.h"
#include "Systick_Init.h"

#define GPIO_N_DATA     (*((volatile uint32_t *)0x400643FCU)) // Port N Data

void Systick_Handler(void);   // Interrupt Handler

int main(void)
{
    GPIO_N_Init();   //Initialize the GPIO_PORT_N

    Systick_Init();  //Initialize the Systick

    while(1)       // Infinite loop
    {

    }
}

void Systick_Handler(void)
{
    GPIO_N_DATA ^= 0xFF;    // Toggle LED
}

