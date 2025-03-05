#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplie deux nombres donnés en arguments
* @argc: Nombre d'arguments
* @argv: Tableau contenant les arguments sous forme de chaînes de caractères
*
* Return: 0 (succès), 1 (erreur si le nombre d'arguments est incorrect)
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3) /* Vérifie si exactement 2 arguments sont pass�*/
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* Convertit le premier argument en entier */
	num2 = atoi(argv[2]); /* Convertit le deuxième argument en entie */
	result = num1 * num2; /* Effectue la multiplication */

	printf("%d\n", result); /* Affiche le résulta */

	return (0);
}
