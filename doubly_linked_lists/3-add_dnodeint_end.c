#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a doubly linked list
* @head: Pointer to a pointer to the head of the list
* @n: The integer value to store in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocation de mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialisation du nouveau nœud */
	new_node->n = n;
	new_node->next = NULL;

	/* Si la liste est vide, le nouveau nœud devient la tête */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Parcours de la liste jusqu'au dernier élément */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Mise à jour des pointeurs */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
