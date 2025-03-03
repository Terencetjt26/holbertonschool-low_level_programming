#include "main.h"

/**
* _strncat - Concatenates two strings up to n bytes
* @dest: Destination string
* @src: Source string
* @n: Maximum number of bytes to copy
* Return: Pointer to `dest`
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /* Trouver la fin de dest */
		i++;

	j = 0;
	while (src[j] != '\0' && j < n) /* Ajouter src à dest jusqu'à n caractère */
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* Terminer la chaî */
	return (dest);
}
