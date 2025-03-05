#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - Vérifie si une chaîne ne contient que des chiffres
* @str: Chaîne à vérifier
*
* Return: 1 si c'est un nombre valide, 0 sinon
*/
int is_number(char *str)
{
	int i = 0;

	if (str[i] == '\0') /* Vérifie si la chaîne est de */
		return (0);

	while (str[i])
	{
		if (!isdigit(str[i])) /* Vérifie si chaque caractère est un chire */
			return (0);
		i++;
	}
	return (1);
}

/**
* main - Additionne des nombres positifs passés en arguments
* @argc: Nombre d'arguments
* @argv: Tableau contenant les arguments sous forme de chaînes
*
* Return: 0 (succès), 1 (erreur si un argument n'est pas un nombre)
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1) /* Aucun nombre donne */
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i])) /* Vérifie si l'argument est un nombre valid */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]); /* Convertit et additionne le nombre */
	}

	printf("%d\n", sum); /* Affiche la somme totale */
	return (0);
}
