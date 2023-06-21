#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - A function and the main program that performs simple operations
* @argc: number of arguments passed to the program
* @argv: An array of arguments passed to the program
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
