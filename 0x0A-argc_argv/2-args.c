#include <stdio.h>

/**
* main - A program that prints all arguments it  recieved
* @argc: Number of command-line arguments
* @argv: a pointer array to strings containing the command-line arguments
* Return: returns 0 (success)
*/
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
