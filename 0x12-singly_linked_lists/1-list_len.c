#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{

	size_t count = 0;
	const list_t *current;

	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
