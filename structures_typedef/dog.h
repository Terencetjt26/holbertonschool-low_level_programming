#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure représentant un chien
* @name: Nom du chien (chaîne de caractères)
* @age: Âge du chien (nombre flottant)
* @owner: Nom du propriétaire (chaîne de caractères)
*
* Description: Cette structure permet de stocker les informations
* d'un chien, notamment son nom, son âge et le nom de son propriétaire.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
