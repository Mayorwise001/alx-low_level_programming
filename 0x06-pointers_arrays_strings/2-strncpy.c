#include "main.h"

/**
*_strincpy - concatenates the string
*the end of the string
*@dest: string
*@src: string
*@n: string
*Return: return pointer
*/

char *_strincpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

