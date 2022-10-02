#include <stdio.h>
#include "main.h"

/**
*_strcpy - returns the length of a string
*@dest: parmeter
*@src: number of elements
*Return: return a length;
*/

char *_strcpy(char *dest, char *src)
{

	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
