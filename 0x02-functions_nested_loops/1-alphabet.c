#include "main.h"

/**
* main -writes the charate
* Description: The charter to print
* Return: on the success 1.
*/


void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}

_putchar('\n');
}
