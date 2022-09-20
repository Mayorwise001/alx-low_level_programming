#include <stdio.h>
#include "main.h"

/**
*_puts - returns the length of a string
*@str: parmeter
*Return: return a length;
*/

void _puts(char *str)
{

	for (; *str != '\0'; str++)
{
		_putchar(*str);
}
	_putchar('\n');
}
