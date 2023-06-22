#include "function_pointers.h"
/**
 * print_name - Calls a function to print a name.
 * @name: Pointer to the name string.
 * @f: Pointer to the function that prints the name.
 *
 * Description: This function takes a name string and a function
 * pointer as parameters.
 * It calls the provided function, passing the name as an argument,
 * to print the name.
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
