#include <stdio.h>

/**
    * main - this code prints alphabet but skips q and e
    * Return: 0 always
    */
int main(void)

{

int i = 97;

do {
	putchar(10);
			i++;
} while (i < 123 && i != 113 && i != 101);

	return (0);
}

