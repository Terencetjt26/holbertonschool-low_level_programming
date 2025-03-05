#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
* _strchr - Recherche un caractère dans une chaîne de caractères.
* @s: La chaîne de caractères.
* @c: Le caractère recherché.
*
* Return: Pointeur vers la première occurrence de c, ou NULL si absent.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0') /* Parcourt la chaîne*/
	{
		if (*s == c) /* Si le caractère correspond*/
			return (s);
		s++;
	}

	if (c == '\0') /* Vérifie si c est le caractère nul '\0*/
		return (s);

	return (NULL); /* Si c n'est pas trouvé, retourne NULL */
}
