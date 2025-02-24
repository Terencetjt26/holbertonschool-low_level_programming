#include "main.h"

/**
* more_numbers - Displays 10 times the numbers from 0 to 14
* followed by a line break.
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Loop to repeat 10 times */
	{
		for (j = 0; j <= 14; j++) /* Loop to print numbers from 0 to 14 */
		{
			if (j >= 10) /* Check if number is 10 or more */
			{
				_putchar('1'); /* Print the '1' for numbers 10-14 */
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n'); /* New line after printing numbers 0-14 */
	}
}
