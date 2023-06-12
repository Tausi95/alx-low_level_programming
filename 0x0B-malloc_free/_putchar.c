include <unistd.h>

/**
 * _putchar - A function that writes a character to stdout
 * @c: The character to print
 * Return: On success, the character written. On error, -1 is returned,
 * and error is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
