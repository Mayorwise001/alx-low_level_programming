#include <stdio.h>

/**
    * main - this code prints alphabet but skips q and e
    * Return: 0 always
    */
int main(void)

{

	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);

}
		putchar('\n');
		return (0);
}


