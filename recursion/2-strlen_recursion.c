#include "main.h"

/**
* _strlen_recursion - Retourne la longueur d'une chaîne de caractères.
* @s: Pointeur vers la chaîne de caractères.
*
* Return: Longueur de la chaîne.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Condition d'arrêt : si la fin de la chaîne est atteint*/
		return (0);

	return (1 + _strlen_recursion(s + 1)); /* Appel récursif avec s + 1 */
}
