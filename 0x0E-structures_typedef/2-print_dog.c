#include "dog.h"
#include <stdio.h>

/**
 * print_dog - A function that prints the values of a struct dog
 * @d: Pointer to the struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /* Check if pointer is valid */
	return;

	/* Print the values of the struct dog */
	printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
	printf("Age: %.6f\n", (*d).age));
	printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
}
