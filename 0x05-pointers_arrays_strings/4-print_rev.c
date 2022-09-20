#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - returns the length of a string
*@str: parmeter
*Return: return a length;
*/

void print_rev(char *s)
{

	int len = strlen(s);
	
	while (len--)
		putchar(*(s + len));
	putchar(10);
}
