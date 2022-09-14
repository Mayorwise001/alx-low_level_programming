#include "main.h"

/**
* print_sign - prints 1 or 0 depending on input
* @n: first parameter
* Description: The charter to print
* Return:  1 if +, 0 if 0, and -1 if -
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
