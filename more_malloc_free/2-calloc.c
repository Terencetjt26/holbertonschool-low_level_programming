#include <stdlib.h>
#include <string.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero.
* @nmemb: Number of elements.
* @size: Size of each element in bytes.
*
* Return: Pointer to allocated memory, or NULL if failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set allocated memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
