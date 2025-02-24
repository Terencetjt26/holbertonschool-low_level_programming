#include "main.h"

/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le deuxième entier.
 *
 * Return: Rien (void).
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;  /* Stocke la valeur de a */
	*a = *b;    /* Copie la valeur de b dans a */
	*b = temp;  /* Copie la valeur temporaire (ancien a) dans b */
}
