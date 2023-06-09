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
		printf("Error: Two integer arguments are needed\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("Multiplication result: %d\n", multiply(num1, num2));

	return (0);
}
/*function definition */
int multiply(int a, int b)
{
	return (a * b);
}
