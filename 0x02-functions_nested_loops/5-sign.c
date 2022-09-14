#include "main.h"

/**
* print_sign - prints 1 or 0 depending on input
* @c: first parameter
* Description: The charter to print
* Return: always (0)
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
