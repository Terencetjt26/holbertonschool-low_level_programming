#include "dog.h"
#include <stdlib.h>

/**
* init_dog - Initialise une variable de type struct dog.
* @d: Pointeur vers la structure à initialiser.
* @name: Nom du chien.
* @age: Âge du chien.
* @owner: Nom du propriétaire.
*
* Description: Cette fonction assigne les valeurs aux membres
* de la structure dog. Vérifie si d est NULL avant d'accéder à ses membres.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
