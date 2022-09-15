#include "main.h"
#include <stdio.h>

/**
* main - main function
*
*i: prints a list of time
*@: row, cone = column, d = digits of current result
*Return: times table.
*
*/

int main(void)
{

	int a;
	int b = 0;


	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
	}
	}
	printf("%d\n", b);
	return (0);
}
