#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a specific position.
* @h: Pointer to the pointer of the head of the list.
* @idx: The index where the new node should be inserted.
* @n: The data to store in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	if (idx == 0)  /* Inserting at the beginning of the list */
		return (add_dnodeint(h, n));

    /* Traverse the list to find the index */
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

    /* If the index is greater than the length of the list */
	if (temp == NULL || i != idx - 1)
		return (NULL);

    /* Create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
