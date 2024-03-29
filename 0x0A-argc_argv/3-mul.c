#include <stdio.h>
#include <stdlib.h>

/* function declaration */
int multiply(int a, int b);

/**
* main - A program that multiplies two numbers
* @argv: a pointer array to strings for command line arguments
* @argc: number of command line arguments
* Return: return 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error:\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", multiply(num1, num2));

	return (0);
}
/*function definition */
/**
* multiply - A function that multiplies two integers
* @a: The first integer
* @b: The second integer
* Return: The product of a and b
*/
int multiply(int a, int b)
{
	return (a * b);
}
