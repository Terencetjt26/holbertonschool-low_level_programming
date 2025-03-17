#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - Executes a function on each element of an array
* @array: The array of integers
* @size: The size of the array
* @action: A pointer to the function to apply to each element
*
* Description: This function iterates through an array and applies
* the function `action` to each element.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
