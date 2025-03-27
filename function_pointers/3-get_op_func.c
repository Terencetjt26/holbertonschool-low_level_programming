#include "3-calc.h"

/**
* get_op_func - Sélectionne la fonction appropriée selon l'opérateur.
* @s: L'opérateur sous forme de chaîne de caractères.
* Return: Pointeur vers la fonction correspondante, ou NULL si invalide.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
