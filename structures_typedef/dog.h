#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure représentant un chien
* @name: Nom du chien (chaîne de caractères)
* @age: Âge du chien (nombre flottant)
* @owner: Nom du propriétaire (chaîne de caractères)
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Déclaration de la fonction init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* DOG_H */
