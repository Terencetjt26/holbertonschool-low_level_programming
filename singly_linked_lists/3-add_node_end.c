#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* create_node - Creates a new node with duplicated string
* @str: String to duplicate
*
* Return: Pointer to new node, or NULL on failure
*/
list_t *create_node(const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
* add_node_end - Adds a new node at the end of a list_t list
* @head: Double pointer to the head of the list
* @str: String to duplicate and add in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!str)
		return (NULL);

	new_node = create_node(str);
	if (!new_node)
		return (NULL);

	if (*head == NULL) /* Si la liste est vide */
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
