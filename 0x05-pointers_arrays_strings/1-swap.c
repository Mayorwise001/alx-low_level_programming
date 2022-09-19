#include "main.h"

/**
* swap_int - resets the value of a given integer to 98
*@a: parmeter
*@b: parameter
*Return : nothing
*/

void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;
	*b = tmp;
}
