#include "main.h"

/**
* find_sqrt - Helper function to find the square root recursively
* @n: The number to find the square root of
* @i: The current divisor being tested
*
* Return: The natural square root, or -1 if none exists
*/
int find_sqrt(int n, int i)
{
	if (i * i > n)  /* Si i^2 dépasse n, il n'a pas de racine carrée naturelle */
		return (-1);
	if (i * i == n) /* Si i^2 == n, on a trouvé la racine carrée */
		return (i);

	return (find_sqrt(n, i + 1)); /* Appel récursif avec i + 1 */
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find the square root of
*
* Return: The natural square root of n, or -1 if n has no natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0) /* Si n est négatif, il n'a pas de racine carrée naturell*/
		return (-1);

	return (find_sqrt(n, 0)); /* Appel de la fonction auxiliaire */
}

