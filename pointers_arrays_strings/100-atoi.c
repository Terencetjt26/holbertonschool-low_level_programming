#include "main.h"

/**
* _atoi - Convertit une chaîne de caractères en entier
* @s: La chaîne à convertir
*
* Return: L'entier converti
*/
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;

	/* Gérer les espaces et caractères non numériques */
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convertir les chiffres en entier */
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > 214748364 || (result == 214748364 && s[i] > '7'))
		{
			/* Vérifier si INT_MIN est géré correctement */
			if (sign == -1 && s[i] == '8' && result == 214748364)
				return (-2147483648);
			return (sign == 1 ? 2147483647 : -2147483648);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
