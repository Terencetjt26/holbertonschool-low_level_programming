#include "main.h"
#include <stdio.h>

/**
* print_chessboard - Prints a chessboard
* @a: The chessboard array (8x8)
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]); /* Affiche le caractèr */
		}
		putchar('\n'); /* Nouvelle ligne après chaque rang� */
	}
}
