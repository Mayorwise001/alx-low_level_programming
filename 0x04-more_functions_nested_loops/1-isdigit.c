#include "main.h"

/**
*_isdigit - checks if a character is uppercase or not
*@c: charcter to be tested
*Return: 1 whether it is, 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
