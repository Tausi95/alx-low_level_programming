#include "main.h"

/**
* int _isalpha() - checks the input for range of uppercase or lowercase letters
* @c: checks the letters and return 1 if it is or 0 otherwise
*/

int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

} 
