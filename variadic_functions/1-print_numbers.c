#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Affiche des nombres séparés par un séparateur.
* @separator: Chaîne de caractères séparant les nombres (peut être NULL).
* @n: Nombre d'arguments.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
