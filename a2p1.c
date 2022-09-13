/*
	Modified by Wagner Morais on Sep 2022.
 */

#include <stdio.h>
#include "rpi-systimer.h"
#include "piface.c"
//#include "led.h"

int main()
{
	piface_init();
	while (1)
	{
		piface_clear();
		piface_puts("Short string:");
		RPI_WaitMicroSeconds(2000000);
		piface_clear();
		piface_puts("This is a long string!");
		RPI_WaitMicroSeconds(2000000);
		piface_clear();
		piface_puts("1st line\n2nd line");
		RPI_WaitMicroSeconds(2000000);
	}
	

	return 0;
}