#include "main.h"


/**
*times_table - main function
*
*Description: prints a list of time
* row, cone = column, d = digits of current result
*Return: times table.
*
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar ('0');
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar ((c % 10) + '0');
				}

				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');
				if (b < 9)
			{
					_putchar(',');
					_putchar(' ');
			}
			}
		}
		_putchar ('\n');
	}
}
