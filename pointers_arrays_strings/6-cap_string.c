#include "main.h"
#include <string.h>
#include <stddef.h>


/**
* cap_string - Capitalizes all words of a string.
* @str: The string to modify.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 0;
	int in_word = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		/* Check if the current character is a separator */
		if (strchr(separators, str[i]) != NULL)
		{
			in_word = 0; /* We are outside of a word */
		}
		else
		{
			if (!in_word)
			{
				/* Capitalize the first letter of the word */
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 'a' + 'A';
				}
				in_word = 1; /* Now we are inside a word */
			}
		}
		i++;
	}

	return (str);
}
