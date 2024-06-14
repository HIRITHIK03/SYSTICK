#include <stdint.h>

// Systick Definitions
#define STCTRL          (*((volatile uint32_t *)0xE000E010))
#define STRELOAD        (*((volatile uint32_t *)0xE000E014))

//Initialize the Systick
void Systick_Init()
{
    STCTRL = 0x03;
    STRELOAD = 4000-1;
}
