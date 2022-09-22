#include "main.h"

/**
*cap_string - function that capitalize
*@s: strng to capitalize
*Return: returns the capitalized string
*/

char *cap_string(char *s)
{
	char b[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	int len = 13;
	int a = 0, i;

	while (s[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1] == b[i]) && (x[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
					i++;
				}
				a++
			}
			return (s);
	}
