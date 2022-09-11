#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet
 * Return: Always 0 (Success)
 */



int main(void)

{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

