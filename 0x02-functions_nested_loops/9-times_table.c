#include "main.h"


/**
*times_table - main function
*
*Description: prints a list of time
*rone = row, cone = column, d = digits of current result
*Return: times table.
*
*/

void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');

		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			d = (r * c);

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			}

}
		_putchar('\n');
		}
