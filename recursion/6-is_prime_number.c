#include "main.h"

/**
* check_prime - Vérifie si un nombre est premier de manière récursive.
* @n: Le nombre à tester.
* @i: Le diviseur à tester.
*
* Return: 1 si n est premier, 0 sinon.
*/
int check_prime(int n, int i)
{
	if (i * i > n) /* Si i^2 dépasse n, alors n est premier*/
		return (1);
	if (n % i == 0) /* Si n est divisible par i, alors il n'est pas premier */
		return (0);

	return (check_prime(n, i + 1)); /* Vérification récursive */
}

/**
* is_prime_number - Détermine si un nombre est premier.
* @n: Le nombre à tester.
*
* Return: 1 si n est premier, 0 sinon.
*/
int is_prime_number(int n)
{
	if (n <= 1) /* 0 et 1 ne sont pas premiers */
		return (0);
	return (check_prime(n, 2)); /* Commence la vérification à partir de 2 */
}
