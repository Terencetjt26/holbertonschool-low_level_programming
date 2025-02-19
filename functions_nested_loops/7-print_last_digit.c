#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit = n % 10;  // Obtenir le dernier chiffre

    // Si le nombre est négatif, rendre le dernier chiffre positif
    if (last_digit < 0)
        last_digit = -last_digit;

    _putchar(last_digit + '0');  // Afficher le dernier chiffre

    return (last_digit);  // Retourner le dernier chiffre
}
