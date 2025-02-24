#include "main.h"

/**
* More_numbers - Displays 10 times the numbers from 0 to 14, followed by a line break.
*/
void more_numbers(void)
{
	int i, j;
	char str[3]; /* Tableau pour stocker les chiffres */

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				str[0] = '1', str[1] = '0' + (j % 10), str[2] = '\0';
			else
				str[0] = '0' + j, str[1] = '\0';

			_putchar(str[0]);
			if (j >= 10)
				_putchar(str[1]);
		}
		_putchar('\n');
	}
}
