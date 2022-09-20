#include <stdio.h>
#include "main.h"

/**
*puts_half - returns the length of a string
*@str: parmeter
*Return: return a length;
*/

void puts_half(char *str)
{

	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
* _strlen - returns the lenght
*@s: string
*Return: the length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')

		len++;
	return (len);
}
