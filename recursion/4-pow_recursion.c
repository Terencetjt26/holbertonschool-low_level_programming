#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The base number.
* @y: The exponent.
*
* Return: The result of x raised to the power of y, or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)  /* Cas d'erreur : exponent négati */
		return (-1);
	if (y == 0)  /* Cas de base : x^0 = 1 */
		return (1);

	return (x * _pow_recursion(x, y - 1));  /* Appel récursif */
}
