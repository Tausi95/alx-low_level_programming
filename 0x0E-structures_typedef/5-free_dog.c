#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees a dog struct
 * @d: Pointer to the dog struct to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	/* Check if d is NULL */
	if (d == NULL)
	return;

	/* Free memory for name and owner strings */
	free((*d).name);
	free((*d).owner);

	/* Free memory for dog struct */
	free(d);
}
