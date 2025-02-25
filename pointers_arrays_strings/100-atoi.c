#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier.
 * @s: La chaîne à convertir.
 *
 * Return: L'entier converti, ou 0 si aucun chiffre trouvé.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	/* Parcourir la chaîne */
	while (s[i])
	{
		/* Gérer les signes */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			found_digit = 1;
		}
		else if (found_digit)
			break; /* Stopper après le premier nombre détecté */

		i++;
	}

	return (result * sign);
}
