#include <stdio.h>

/**
* main - A program that prints the number of arguments passed into it
* @argc: The number of command-line arguments
* @argv: A pointer array of strings containing the command-line arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	int count = 0;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
