#include "main.h"
#include <stdio.h>

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
		putchar(*(str + i));
		i++;
}
	putchar(10);
}
