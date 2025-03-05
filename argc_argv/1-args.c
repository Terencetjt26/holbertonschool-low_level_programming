#include <stdio.h>

/**
* main - Affiche le nombre d'arguments passés au programme
* @argc: Nombre total d'arguments (y compris le nom du programme)
* @argv: Tableau contenant les arguments (non utilisé ici)
*
* Return: 0 (succès)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
