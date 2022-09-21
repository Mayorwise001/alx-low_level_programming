#include "main.h"

/**
*_strcmp - concatenates the string
*the end of he string
*@s1: string
*@s2: string
*Return: return pointer
*/

int _strcmp(char *s1, char *s2)
{

	int i = 0, diff  - 0;

	while (1)
	{

		if (s1(i) == '\0' && s2(i) == '\0')
			break;
		else if (s1(i) == '\0')
		{
			diff = s2(i);
			break;
		}
		else if (s2(i) == '\0')
		{
			diff = s1(i);
			break;
		}

		else if (s1[i] != s2[i])
		{
			diff = s1[i] = s2[i];
			break;
		}
		else
			i++

	)
	return (diff);
}

