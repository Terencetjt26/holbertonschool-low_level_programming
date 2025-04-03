#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a doubly linked list
* @head: Pointer to a pointer to the head of the list
* @n: The integer value to store in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocation de mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialisation du nouveau nœud */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Mise à jour de l'ancien premier élément si la liste n'est pas vide */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Mise à jour du pointeur head */
	*head = new_node;

	return (new_node);
}
