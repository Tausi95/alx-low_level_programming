#include "main.h"

**
 * swap_int - swaps the values of two integers
 * @x: pointer to the first integer
 * @y: pointer to the second integer
 *
 * This function swaps the values of the integers pointed to by @x and @y.
 * It does not return a value.
 */
void swap_int(int *x, int *y)
{
	int temp; /* create a temporary variable to hold one of the values */

	temp = *x;
	*x = *y;
	*y = temp;
}
