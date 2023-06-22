#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Description: This function iterates over the elements of the array
 * and applies the provided action function to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
