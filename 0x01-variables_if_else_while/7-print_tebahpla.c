#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet
 * Return: Always 0 (Success)
 */



int main(void)

{
	int i;

	for (i = 'z'; i >= 'a; i-- )
		{
			putchar(i);
	}
	putchar('\n');
	return (0);
}

