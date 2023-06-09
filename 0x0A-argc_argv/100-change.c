#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the minimum number of coins to make change
* @argc: the number of command-line arguments
* @argv: an array of strings that contain the command-line arguments
* Return: returns 0 (sucessful), otherwise returns 1 on error
*/
int main(int argc, char *argv[])
{
	int cents;
	int quarters, dimes, nickels, coins, pennies;
	int min;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	cents = cents - (quarters * 25);

	dimes = cents / 10;
	cents = cents - (dimes * 10);

	nickels = cents / 5;
	cents = cents - (nickels * 5);

	coins = cents / 2;
	cents = cents - (coins * 2);

	pennies = cents / 1;

	min = quarters + dimes + nickels + coins + pennies;
	printf("The minimum amount of coin(s) is : %d\n", min);
	
	return (0);
}
