#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * This function prints the numbers from 0 to 14 ten times on separate lines.
 */
int main(void)
{
	for (int i = 0; i < 10; i++)  /* Loop 10 times for each line */
	{
		for (int j = 0; j <= 14; j++)  /* Loop from 0 to 14 */
		{
			if (j < 10)
				printf("%d", j);  /* Print numbers 0-9 */
			else
				printf("%d", j);  /* Print numbers 10-14 */
		}
		printf("\n");  /* New line after each row */
	}
	return (0); /* Parentheses around return value */
}
