#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* main - Entry to the program to generate random password
* Return: 0 always success
*/

int main(void)
{

	const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const size_t valid_chars_len = strlen(valid_chars);
	const size_t password_len = 8;
	char password[password_len + 1];

	srand(time(NULL));

	for (size_t i = 0; i < password_len; i++)
	{

		password[i] = valid_chars[rand() % valid_chars_len];
	}

	password[password_len] = '\0';

	printf("%s\n", password);
	return (0);
}
