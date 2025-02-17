#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++) /* ASCII codes 48 ('0') to 57 ('9') */
		putchar(num);
	putchar('\n');

	return (0);
}
