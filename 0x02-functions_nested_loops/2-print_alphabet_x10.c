#include "main.h"

/**
* print_alphabet_x10 -writes the charate
* Description: The charter to print
* Return: void
*/


void print_alphabet_x10(void)
{
int i, j;

for (i = 'a'; i <= 'z'; i++)
{
	while (j < 10)
	{
		_putchar(i);
}
}

_putchar('\n');
}
