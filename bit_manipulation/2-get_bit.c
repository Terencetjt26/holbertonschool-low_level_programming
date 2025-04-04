#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @n: Number to check
* @index: Position of the bit (starting from 0)
*
* Return: Value of the bit (0 or 1), or -1 if index is out of bounds
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
