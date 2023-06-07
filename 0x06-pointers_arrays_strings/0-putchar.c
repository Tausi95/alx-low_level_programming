#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: On success, the character written. On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

