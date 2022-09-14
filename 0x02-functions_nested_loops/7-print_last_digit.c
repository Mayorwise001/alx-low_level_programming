#include "main.h"
#include "6-abs.c"

/**
*print_last_digit - main function
*
*@n: character to compare
*
*Return: 1 fi positive, 0 if zero, -1 if negative
*
*/

int print_last_digit(int n)

{

	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
