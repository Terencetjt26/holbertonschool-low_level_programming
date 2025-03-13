#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Crée un nouveau chien
* @name: Nom du chien
* @age: Âge du chien
* @owner: Propriétaire du chien
*
* Return: Pointeur vers le nouveau chien, ou NULL si échec
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;
	int i, name_len = 0, owner_len = 0;

	/* Allocation de mémoire pour le chie */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Calcul de la longueur des chaînes */
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	/* Allocation de mémoire pour les chaînes */
	new_name = malloc(sizeof(char) * (name_len + 1));
	new_owner = malloc(sizeof(char) * (owner_len + 1));

	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(d);
		return (NULL);
	}

	/* Copie des chaînes */
	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];

	/* Initialisation de la structure */
	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
