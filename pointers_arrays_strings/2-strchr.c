#include "main.h"
#include <stddef.h> /* Pour NULL */ 

/**
* _strchr - Locate a character in a string
* @s: The string to search
* @c: The character to find
*
* Return: Pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0') /* Si on cherche '\0', il faut le retourner aussi */
		return (s);

	return (NULL);
}
