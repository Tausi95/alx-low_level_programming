#include "lists.h"

/**
 * get_dnodeint_at_index - get value at an index
 * @head: head of the list
 * @index: index of node to get
 *
 * Return: the node at that index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index > 0 && head->next != NULL)
	{
		head = head->next;
		index--;
	}

	if (index > 0)
		return (NULL);

	return (head);
}
