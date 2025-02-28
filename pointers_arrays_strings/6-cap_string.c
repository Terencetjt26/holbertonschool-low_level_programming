#include "main.h"

/**
* cap_string - Capitalise chaque mot d'une chaîne
* @str: La chaîne d'entrée
*
* Return: La chaîne modifiée
*/
char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Vérifie le premier caractère */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;

	while (str[i])
	{
		/* Véri:fie si le caractère précédent est un séparateur */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32; /* Convertit en majuscule */
				break;
			}

		}
		i++;
	}
	return (str);
}
