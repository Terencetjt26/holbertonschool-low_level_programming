#include "main.h"

/**
 * main - Test la fonction puts2 avec plusieurs entrées.
 * Return: Always 0.
 */
int main(void)
{
	char *str1 = "0123456789";
	char *str2 = "Hello, World!";
	char *str3 = "Test123";
    
	puts2(str1);  /* Attendu : 02468 */
	puts2(str2);  /* Attendu : Hlo ol! */
	puts2(str3);  /* Attendu : Ts13 */

	return (0);
}
