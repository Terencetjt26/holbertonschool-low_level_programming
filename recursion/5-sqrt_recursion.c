#include "main.h"

/**
* _sqrt_helper - Fonction auxiliaire pour trouver la racine carrée.
* @n: Nombre dont on cherche la racine carrée.
* @i: Nombre testé comme racine potentielle.
*
* Return: La racine carrée naturelle de `n`, ou -1 si elle n'existe pas.
*/
int _sqrt_helper(int n, int i)
{
	if (i * i > n)  /* Si i^2 dépasse n, alors pas de racine parfaite*/
		return (-1);
	if (i * i == n) /* Si i^2 est exactement n, alors i est la racine carrée*/
		return (i);

	return (_sqrt_helper(n, i + 1)); /* Appel récursif en augmentant i */
}

/**
* _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre.
* @n: Nombre dont on cherche la racine carrée.
*
* Return: La racine carrée naturelle de `n`, ou -1 si elle n'existe pas.
*/
int _sqrt_recursion(int n)
{
	if (n < 0) /* Si n est négatif, il n'a pas de racine carrée naturell*/
		return (-1);

	return (_sqrt_helper(n, 0)); /* Appel de la fonction auxiliaire */
}
