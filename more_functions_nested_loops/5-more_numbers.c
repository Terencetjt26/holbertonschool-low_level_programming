#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 */
void more_numbers(void)
{
	int i;
	char numbers[] = "01234567891011121314\n";

	for (i = 0; i < 10; i++)  /* Boucle pour imprimer 10 lignes */
	{
		char *ptr = numbers;

		while (*ptr)
		{
			_putchar(*ptr);
			ptr++;
		}
	}
}
