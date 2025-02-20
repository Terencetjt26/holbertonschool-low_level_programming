#include "8-24_hours.h"
#include "_putchar.h"

/**
	* jack_bauer - Prints every minute of the day of Jack Bauer
	*
	* Description: This function prints every minute from 00:00 to 23:59
	* using _putchar to display the time in the format HH:MM.
	*
	* Return: void
	*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + h / 10);	/* print the tens digit of hour */
			_putchar('0' + h % 10);	/* print the ones digit of hour */
			_putchar(':');
			_putchar('0' + m / 10);	/* print the tens digit of minute */	
			_putchar('0' + m % 10);	/* print the ones digit of minute */
			_putchar('\n');
		}
	}
}
