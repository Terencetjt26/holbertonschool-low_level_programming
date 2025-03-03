#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: The string to search
* @accept: The substring to match
*
* Return: The length of the initial segment of s
*         that consists only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				break;
		}

		if (accept[i] == '\0')  /* If no match was found */
			break;

		count++;
		s++;
	}

	return (count);
}
