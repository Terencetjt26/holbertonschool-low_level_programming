#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');  /* Print spaces before the backslash */
			}
			_putchar('\\');  /* Print the backslash */
			_putchar('\n');  /* Move to the next line */
		}
	}
	else
	{
		_putchar('\n');  /* If n is 0 or less, print just a newline */
	}
}
