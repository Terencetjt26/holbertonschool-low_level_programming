#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index.
* @head: Pointer to the pointer of the head of the list.
* @index: The index of the node to delete.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (temp == NULL)  /* Check if the list is empty */
		return (-1);

	if (index == 0)  /* If we want to delete the first node */
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the given index */
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

    /* If the index is out of range */
	if (temp == NULL)
		return (-1);

    /* Update the pointers of the adjacent nodes */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
