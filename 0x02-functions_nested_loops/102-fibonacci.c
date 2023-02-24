#include <stdio.h>
/**
* main - Entry to the fibanocci numbers program
* Return: 0 always success
*/

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	printf("1");

	while (i < 49)
	{

		printf(", %ld", k);

		k += j;
		j = k - j;
		++i;
	}
	printf("\n");
	return (0);
}
