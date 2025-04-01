#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Double pointer to the head of the list
* @str: String to be duplicated and stored in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	size_t len = 0;

	if (str == NULL) /* Vérifier si str est NULL */
		return (NULL);

    /* Calculer la longueur de str */
	while (str[len])
		len++;

    /* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

    /* Dupliquer str */
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

    /* Initialiser le nouveau nœud */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head; /* Le nouveau nœud pointe vers l'ancien head */
	*head = new_node; /* head pointe maintenant vers le nouveau nœud */

	return (new_node);
}
