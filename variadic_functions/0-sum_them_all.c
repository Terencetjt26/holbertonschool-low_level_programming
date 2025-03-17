#include <stdarg.h> /* Pour utiliser va_list, va_start, va_arg, va_end */

/**
* sum_them_all - Calcule la somme de tous ses paramètres.
* @n: Nombre d'arguments.
* Return: Somme des paramètres, ou 0 si n == 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
