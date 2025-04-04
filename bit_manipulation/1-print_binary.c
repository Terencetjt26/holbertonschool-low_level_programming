#include "main.h"

/**
* print_binary - Prints the binary representation of a number
* @n: The number to convert and print
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* Décalage à droite pour traiter les bits plus significatifs */

	_putchar((n & 1) + '0'); /* Affiche le bit courant (0 ou 1) */
}
