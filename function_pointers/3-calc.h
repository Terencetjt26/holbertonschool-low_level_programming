#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct op - Structure pour associer un opérateur à une fonction.
* @op: L'opérateur sous forme de chaîne.
* @f: Pointeur vers la fonction correspondante.
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}	op_t;

/* Prototypes des fonctions d'opérations */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Prototype de la fonction qui sélectionne la bonne opération */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
