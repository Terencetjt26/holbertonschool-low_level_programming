#include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string whose length is to be calculated.
* 
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Condition de fin de chaîne */
		return (0);  /* Si la fin de la chaîne est atteinte, on retourne 0 */
    
	return (1 + _strlen_recursion(s + 1));  /* Ajoute 1 pour chaque caractère */
}
