#include "3-calc.h"

/**
* get_op_func - selects the correct function to perform operatin in a program
* @s: operator pass as argument to the program
*
* Return: pointer to the function that corresponds to the operator
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op && !(*(s+1)))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
