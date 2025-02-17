#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--) /* ASCII codes 122 ('z') to 97 ('a') */
		putchar(ch);
	putchar('\n');

	return (0);
}
