#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - Returns the sum of a and b
* @a: First integer
* @b: Second integer
* Return: Sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Returns the difference of a and b
* @a: First integer
* @b: Second integer
* Return: Difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Returns the product of a and b
* @a: First integer
* @b: Second integer
* Return: Product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Returns the result of division of a by b
* @a: First integer
* @b: Second integer
* Return: Quotient
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
* op_mod - Returns the remainder of the division of a by b
* @a: First integer
* @b: Second integer
* Return: Remainder
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
