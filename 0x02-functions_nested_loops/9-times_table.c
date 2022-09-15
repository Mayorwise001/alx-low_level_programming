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
	int r, c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 1; c <= 9; c++)
		{
			int d = c * i;

			if (c == 0)
			{
				_putchar('0');
			}
			else if	(d <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}

}
		_putchar('\n');
		}
}
