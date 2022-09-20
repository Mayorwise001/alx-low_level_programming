#include <stdio.h>
#include "main.h"

/**
*_puts - returns the length of a string
*@str: parmeter
*Return: return a length;
*/

int _puts(char *str)
{

	int i = 0;

	while (*(str + i) != '\0')
{
		_putchar(*(str + i));
		i++;
}
	_putchar(10);
}
