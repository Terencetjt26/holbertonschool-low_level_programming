#include "main.h"

/**
* _strncat - Concatène deux chaînes de caractères
* en utilisant au maximum n octets de src
* @dest: La destination de la concaténatio
* @src: La source à ajouter
* @n: Nombre maximum de caractères à ajouter
*
* Return: Pointeur vers la chaîne résultante dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Trouver la fin de la chaîne dest */
	while (dest[i] != '\0')
		i++;

	/* Ajouter au maximum n caractères de src à dest */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractère null à la fin */
	dest[i] = '\0';

	return (dest);
}
