#include <stdio.h>

/**
    * main - print the letters of the alphabet
    *  Description: print the letters of the alphabet
    * Return: Always 0 (Success)
    */


int main(void)

{
	int i, m;
	i = 97;
	m = 65;

	while (i < 123)
{		putchar(i);
		i++;
	}
	while (m < 91)
{		putchar(m);
		m++;
}
		putchar(10);
	return (0);
}
