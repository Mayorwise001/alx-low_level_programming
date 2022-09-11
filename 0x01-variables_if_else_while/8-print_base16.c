#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet
 * Return: Always 0 (Success)
 */



int main(void)

{
	int a;
	char l;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}

