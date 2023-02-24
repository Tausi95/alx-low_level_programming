#include <stdio.h>
/**
* main - Entry to the fibanocci numbers program
* Return: 0 always success
*/

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (1 == 0)
		printf("%ld", j);
		else if (i == 1)
		printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
