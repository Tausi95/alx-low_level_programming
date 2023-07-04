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


	if (head == NULL)
	{
		return;/* No list to free */
	}
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;  /* Set the head to NULL after freeing the list */
}
