#include <stddef.h>
#include "main.h"

/**
* binary_to_uint - Convertit une chaîne binaire en entier non signé
* @b: pointeur vers une chaîne contenant uniquement des '0' et '1'
*
* Return: nombre converti, ou 0 si la chaîne est invalide
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
