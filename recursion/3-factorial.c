#include "main.h"

/**
* factorial - Returns the factorial of a number.
* @n: The number to calculate the factorial of.
*
* Return: The factorial of the number, or -1 if n is negative.
*/
int factorial(int n)
{
	if (n < 0)  /* Si n est inférieur à 0, retourner -1*/
		return (-1);

	if (n == 0)  /* Condition de base : facteur de 0 est 1 */
		return (1);

	return (n * factorial(n - 1));  /* Appel récursif pour calculer le facteur */
}
