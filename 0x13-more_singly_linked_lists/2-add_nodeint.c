#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head pointer of the list.
 * @n: The value to be assigned to the data member of the new node.
 *
 * Return: Address of the new node, or NULL if failed to allocate memory.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);  /* Failed to allocate memory for the new node */
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
