#include <stdlib.h>

int _putchar(char c);

void *malloc_checked(unsigned int b) 
{
	void *ptr = malloc (b);
	if (ptr == NULL)
	{
		unsigned int i;
		for (i = 0; i < 3; i++)
			_putchar('E');
		
		_putchar('E');
		exit(98);
	}
	return (ptr);
}
