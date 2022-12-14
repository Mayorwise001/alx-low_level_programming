#include "main.h"

/**
 * _pow_recursion - find the value of x raised to the power of y
 * @x: base
 * @y: power
 *
 * Return: power (Success) or -1 (error)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
