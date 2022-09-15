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

int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
	{
			printf(" %d", i);

			if (i != 98)
			{
				printf(", ");

		}
	}
}
	else
	{
		for (i = n; i <= 98; i++)
	{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
	}

}
}
	printf('\n');
}
