#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Affiche des chaînes de caractères
* séparées par un séparateur.
* @separator: Chaîne de caractères séparant les chaînes (peut être NULL).
* @n: Nombre de chaînes passées à la fonction.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
