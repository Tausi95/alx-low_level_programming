#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head pointer of the list.
 * @n: The value to be assigned to the data member of the new node.
 *
 * Return: Address of the new node, or NULL if failed to allocate memory.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);  /* Failed to allocate memory for the new node */
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;  /* The list was empty, the new node becomes the head */
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;  /* Add the new node at the end of the list */
	}

	return (new_node);
}
