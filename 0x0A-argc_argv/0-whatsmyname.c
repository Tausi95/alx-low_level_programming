#include <stdio.h>

/**
* main - Program to print its name as the first argument
* @argc: The number of command-line arguments
* @argv: A pointer array to arguments passed
* Return: return 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
