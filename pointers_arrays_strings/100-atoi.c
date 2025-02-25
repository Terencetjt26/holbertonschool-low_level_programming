#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}

	return (result * sign);
}
