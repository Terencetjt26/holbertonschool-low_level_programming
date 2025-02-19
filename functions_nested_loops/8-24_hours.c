#include "main.h"

void jack_bauer(void)
{
    int h, m;

    for (h = 0; h < 24; h++)
    {
        for (m = 0; m < 60; m++)
        {
            _putchar('0' + h / 10);  /* Afficher l'heure (dizaines) */
            _putchar('0' + h % 10);  /* Afficher l'heure (unités) */
            _putchar(':');
            _putchar('0' + m / 10);  /* Afficher les minutes (dizaines) */
            _putchar('0' + m % 10);  /* Afficher les minutes (unités) */
            _putchar('\n');
        }
    }
}
