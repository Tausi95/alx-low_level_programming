#include "lists.h"
/**
 * free_list - A function that frees a list_t
 * @head: beginning of list pointer
 *
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
