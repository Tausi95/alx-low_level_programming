#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - Frees a listint_t linked list and sets the head to NULL.
* @head: Pointer to the head pointer of the list.
* Description: This function frees all the nodes of a listint_t linked list
* and sets the head pointer to NULL. If the head is already NULL, indicating
* an empty list, the function returns without performing any operations.
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return; /* No list to free */
	}

	while (current != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
