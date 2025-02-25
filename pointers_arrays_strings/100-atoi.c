#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (UINT_MAX / 10) ||
			(result == (UINT_MAX / 10) && (*s - '0') > (INT_MAX % 10)))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * (int)result);
}
