#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a list_t list
* @head: Pointer to the head of the list
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;  /* Stocker le nœud suivant */
		free(head->str);     /* Libérer la mémoire de la chaîne */
		free(head);          /* Libérer le nœud actuel */
		head = temp;         /* Passer au nœud suivant */
	}
}
