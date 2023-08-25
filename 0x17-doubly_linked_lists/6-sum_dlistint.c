#include "lists.h"

/**
 * sum_dlistint - sum all values in a list
 * @head: head of the list
 *
 * Return: sum total
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

