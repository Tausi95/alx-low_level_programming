#include <stdlib.h>
/**
* *_realloc - a function that allocate and deallocate a memory block 
* using the malloc and free functions
* @ptr: a pointer to a memory allocated by malloc
* @old_size: memory in bytes allocated to ptr
* @new_size: memory is bytes allocated to a new memory block
*
* Return: NULL if ne_size == 0 and ptr is not NULL.
*/
 
void *_realloca(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* if new size is equal to old size, return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NUll, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is zero, equivalent to free(ptr) and return NULL */
	if (new_size == 0)
		free(ptr);
		return (NULL);

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents to new memory block */
	unsigned int copy_size = (old_size < new_size) ? old_size : new_size;
	char *src = (char *)ptr;
	char *dest = (char *)new_ptr;
	for (i = 0; i < copy_size; i++)
		dest[i] = src[i];

	free(ptr);

	return (new_ptr);
}
