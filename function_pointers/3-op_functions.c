#include "3-calc.h"

/**
* op_add - Retourne la somme de deux nombres.
* @a: Premier nombre.
* @b: Deuxième nombre.
* Return: La somme de a et b.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Retourne la différence de deux nombres.
* @a: Premier nombre.
* @b: Deuxième nombre.
* Return: La différence entre a et b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Retourne le produit de deux nombres.
* @a: Premier nombre.
* @b: Deuxième nombre.
* Return: Le produit de a et b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Retourne le quotient de la division de a par b.
* @a: Premier nombre.
* @b: Deuxième nombre.
* Return: Le quotient de a par b.
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - Retourne le reste de la division de a par b.
* @a: Premier nombre.
* @b: Deuxième nombre.
* Return: Le reste de la division de a par b.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
