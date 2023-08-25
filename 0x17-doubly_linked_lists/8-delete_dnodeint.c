#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at an index
 * @head: pointer to the head of the list
 * @index: index at which to delete node
 *
 * Return: 1 (success) -1 (failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	prev_node = current->prev;
	if (current->next != NULL)
		current->next->prev = prev_node;

	prev_node->next = current->next;
	free(current);
	return (1);
}

