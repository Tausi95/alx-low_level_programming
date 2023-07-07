#include "main.h"
/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

/* If the first byte (lowest memory address) is non-zero, */
/* it is little endian */
	if (*ptr)
		return (1);
	else
		return (0);
}
