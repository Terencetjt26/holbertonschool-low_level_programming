#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++) /* ASCII codes 0-9 */
		putchar(num);
	for (num = 97; num <= 102; num++) /* ASCII codes a-f */
		putchar(num);
	putchar('\n');

	return (0);
}
