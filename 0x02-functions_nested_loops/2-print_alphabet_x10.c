#include "main.h"

/**
* print_alphabet_x10 -writes the charate
* Description: The charter to print
* Return: void
*/


void print_alphabet_x10(void)
{
int i=0;

while (i < 10)
{
	char j = 'a';
	while (j <= 'z')
	{
		_putchar(j);
		j++;
}
	i++;
	_putchar('\n');
}
}
