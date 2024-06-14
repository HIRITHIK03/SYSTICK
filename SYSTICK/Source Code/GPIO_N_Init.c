#include <stdint.h>

// GPIO Register Definitions for Port N

#define RCGC_GPIO_N     (*((volatile uint32_t *)0x400FE608U)) // Run Mode Clock Gating Control
#define GPIO_N_DEN      (*((volatile uint32_t *)0x4006451CU)) // Port N Digital Enable
#define GPIO_N_DIR      (*((volatile uint32_t *)0x40064400U)) // Port N Direction

//Initialisation of GPIO Port N
 void GPIO_N_Init()
 {
     // Enable clock for GPIO N
     RCGC_GPIO_N = 0x1020U;

     // Enable digital I/O on Pin-1 of GPIO N
     GPIO_N_DEN = 0x02U;

     // Set Pin-1 of GPIO N as output
     GPIO_N_DIR = 0x02U;
 }
