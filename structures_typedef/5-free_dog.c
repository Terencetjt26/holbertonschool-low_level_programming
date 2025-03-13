#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees the memory allocated for a dog struct
* @d: The dog to free
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the name and owner strings if they were dynamically allocated */
		free(d->name);
		free(d->owner);

		/* Finally, free the dog struct itself */
		free(d);
	}
}

