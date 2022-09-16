#include "main.h"

/**
*print_numbers - checks if a character is uppercase or n
*Return: returns result
*/

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
