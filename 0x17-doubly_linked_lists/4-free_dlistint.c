#include "lists.h"

/**
 * free_dlistint - free every node in a list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next_node = current->next;
		free(current);
		current = next_node;
	}
}
