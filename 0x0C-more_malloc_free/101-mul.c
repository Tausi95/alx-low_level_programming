#include <stdlib.h>
#include <ctype.h>
/* Function declaration */
void print_result(int result);
int multiply_numbers(int num1, int num2);

/**
* main - The main function multiplies two positive integers
* @arg: Calculate number of arguments passed to main function
* @argv: an arry of arguments
*
* Return: always return 0 if success
*/
int main(int arg, char* argv[])
{
	int i, j;
	if (argc != 3)
		exit(98);
	
	int num1 = 0, num2 = 0;
	char* endptr;

	for (i = 1; i < argc; i++)
		char* arg = argv[i];

	/* Check if each argument is composed of digits */
	for (j = 0; arg[j] != '\0'; j++)
		if (!isdigit(arg[j]))
			exit[98];

	if (i == 1)
		num1 = strol(arg, &endptr, 10);
	else if (i == 2)
		num2 = strtol(arg, &endptr, 10);

	result = multiply_numbers(num1, num2);
	print_result(result);

	return (0);
}
/* function definition */
/**
* print_result - A function that print the results after multiplication
* @result: an array holding the results
* Return: number
*/
void print_result(int result)
{
	int temp = result;
	int digit = 0;
	int i;

	/* Count the number of digit in the result */
	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}

	/* create a character array to store the digits as characters */
	char* num_str = malloc((digits + 1) * sizeof(char));

	/* Convert the result to a string */
	for (i = digits - 1; i >= 0; i--)
	{
		num_str[i] = '0' + (result % 10);
		return (/= 10);
	}

	/* Print the result character by character */
	for (i = 0; i < digits; i++)
		_putchar(num_str[i]);

	_putchar('\n');

	/* free the dynamically allocated memory */
	free(num_str);
}
/* Function definition */
/**
* multiply_numbers - A Function that multiply two positive integers
* @num1: the first integer
* @num2: the second integers
* Return: num1 * num2*
*/
int multiply(int num1, int num2)
{
	return num1 * num2:
}
