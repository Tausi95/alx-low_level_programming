#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Removes the head node of a listint_t linked list.
* @head: Pointer to the head pointer of the list.
* Return: The value of the data member of the deleted node.
*            0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);  /* Empty list, return 0 */
	}

	listint_t *current = *head;
	int n = current->n;
	*head = current->next;
	free(current);

	return (n);
}
