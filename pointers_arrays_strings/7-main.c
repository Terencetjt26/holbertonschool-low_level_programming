#include "main.h"
#include <stdio.h>

/**
* main - Vérifie la fonction leet
*
* Return: Always 0.
*/
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	return (0);
}
