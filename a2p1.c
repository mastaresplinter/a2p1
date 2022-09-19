/*
	Modified by Wagner Morais on Sep 2022.
 */

#include <stdio.h>
#include "rpi-systimer.h"
#include "piface.c"

int main()
{
	piface_init();
	
	piface_puts("DT8025 - A2P1");
	RPI_WaitMicroSeconds(2000000);
	piface_clear();

	while (1)
	{
		piface_puts("Short string:");
		piface_clear();
		piface_puts("This is a long sTrring!!");
		RPI_WaitMicroSeconds(2000000);
		piface_clear();
		piface_puts("1st line\n2nd line");
		RPI_WaitMicroSeconds(2000000);
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 16; j++)
			{
			piface_set_cursor(j,i);
			piface_putc('H');
			RPI_WaitMicroSeconds(500000);
			piface_clear();
			}
		}
	}
	

	return 0;
}