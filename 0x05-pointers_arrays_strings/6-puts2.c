#include <stdio.h>
#include "main.h"

/**
*puts2 - returns the length of a string
*@str: parmeter
*Return: return a length;
*/

void puts2(char *str)
{

	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
