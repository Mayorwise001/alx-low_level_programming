#include <stdio.h>
#include "main.h"

/**
*print_diagonal - checks if a character is uppercase or n
*@n: parameter
*Return: returns result
*/

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{

		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
