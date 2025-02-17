#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++) /* ASCII codes 0-9 */
	{
		putchar(num);
		if (num != 57) /* Vérifie si ce n'est pas le dernier chiffre */
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
