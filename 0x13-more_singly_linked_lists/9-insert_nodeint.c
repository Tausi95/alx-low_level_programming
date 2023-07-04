#include "lists.h"
/**
* insert_nodeint_at_index - Inserts a new node at a given index in a
*                           listint_t linked list.
* @head: Pointer to the head pointer of the list.
* @idx: Index at which the new node should be inserted.
* @n: Value to be assigned to the data member of the new node.
*
* Return: Address of the new node,
*         or NULL if the function fails or the index is out of range.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
	{
		return (NULL);  /* Invalid input */
	}
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);  /* Failed to allocate memory for the new node */
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;
		unsigned int count = 0;

		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}

		if (current == NULL)
		{
			free(new_node);
			return (NULL);  /* Index out of range */
		}

		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
