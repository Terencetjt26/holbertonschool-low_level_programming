#include <stdio.h>
#include "dog.h"

/**
* print_dog - Affiche les informations d'une structure dog.
* @d: Pointeur vers la structure à afficher.
*
* Description: Cette fonction affiche le nom, l'âge et le propriétaire
* d'un chien. Si une valeur est NULL, elle affiche "(nil)" à la place.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Vérification et affichage des valeurs */
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
