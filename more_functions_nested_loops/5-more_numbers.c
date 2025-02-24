#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the numbers from 0 to 14 ten times
 * on separate lines.
 *
 * Return: return 0
 */
int main(void)
{
	int i, j;  /* Déclaration des variables en dehors de la boucl */

	for (i = 0; i < 10; i++)  /* Boucle 10 fois pour chaque ligne */
	{
		for (j = 0; j <= 14; j++)  /* Boucle de 0 à 14 */
		{
			printf("%d", j);  /* Imprimer les nombres de 0 à 14 */
		}
		printf("\n");  /* Nouvelle ligne après chaque lign */
	}

	return (0);  /* Retourne 0 pour indiquer que l'exécution a réus */
}
