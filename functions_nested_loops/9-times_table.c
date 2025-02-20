#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i < 10; i++)  /* Loop for each row (0 to 9) */
    {
        for (j = 0; j < 10; j++)  /* Loop for each column (0 to 9) */
        {
            product = i * j;

            if (j == 0)  /* Print the first number of the row without a leading space */
                _putchar('0' + product);
            else  /* For subsequent numbers, handle formatting */
            {
                _putchar(',');
                _putchar(' ');

                if (product < 10)  /* If the product is a single digit */
                    _putchar(' ');

                /* Handle the case when the product is a two-digit number */
                if (product >= 10)
                {
                    _putchar('0' + product / 10);  /* Print the tens place */
                }
                _putchar('0' + product % 10);  /* Print the ones place */
            }
        }
        _putchar('\n');  /* New line after each row */
    }
}
