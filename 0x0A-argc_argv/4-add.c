#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Program for  additional of  positive numbers
* @argc: the number of command-line arguments
* @argv: an array of strings containing the command-line arguments
* Return: returns 0
*/
int main(int argc, char *argv[])
{
	int j, sum = 0;

	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		sum += strtol(argv[j], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
