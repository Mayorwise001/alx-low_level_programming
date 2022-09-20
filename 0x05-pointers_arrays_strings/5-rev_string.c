#include <stdio.h>
#include "main.h"

/**
*rev_string - returns the length of a string
*@s: parmeter
*Return: return a length;
*/

void rev_string(char *s)
{

	int i, tmp, len  = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

/**
*_strlen - return the length of string
*@s: string
*Return: the lenght of the given string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
