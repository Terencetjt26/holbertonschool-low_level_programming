#include "main.h"

/**
 * jack_bauer - imprime chaque minute de la journée de Jack Bauer,
 *               de 00:00 à 23:59.
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)  /* Boucle sur les heures */
    {
        for (minute = 0; minute < 60; minute++)  /* Boucle sur les minutes */
        {
            /* Affiche l'heure et la minute au format 00:00 */
            _putchar((hour / 10) + '0');  /* Affiche le premier chiffre de l'heure */
            _putchar((hour % 10) + '0');  /* Affiche le deuxième chiffre de l'heure */
            _putchar(':');
            _putchar((minute / 10) + '0');  /* Affiche le premier chiffre de la minute */
            _putchar((minute % 10) + '0');  /* Affiche le deuxième chiffre de la minute */
            _putchar('\n');
        }
    }
}
