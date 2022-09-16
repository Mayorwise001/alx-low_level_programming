#include <stdio.h>
#include "main.h"

/**
*print_line - checks if a character is uppercase or n
*@n: parameter
*Return: returns result
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');

	}
	putchar('\n');
}
