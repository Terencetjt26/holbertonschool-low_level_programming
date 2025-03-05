#include <stdio.h>

/**
* main - Affiche tous les arguments reçus en ligne de commande
* @argc: Nombre total d'arguments
* @argv: Tableau contenant les arguments sous forme de chaînes de caractères
*
* Return: 0 (succès)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
