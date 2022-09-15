#include "main.h"
#include <stdio.h>

/**
*print_to_98 - main function
*
*@n: prints a list of time
* : row, cone = column, d = digits of current result
*Return: times table.
*
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
	{
			printf(" %d, ", n);

			if (n == 98)
				continue;
			printf(", ");

		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
	{
			printf("%d, ", n);
			if (n == 98)
				continue;
			print(", ");
		}
		print("\n");
}
}
