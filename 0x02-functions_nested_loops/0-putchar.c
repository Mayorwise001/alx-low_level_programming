#include <unistd.h>

/**
* _putchar -writes the charate
* @c: The charter to print
* Return: on the success 1.
*/


int _putchar(char c)
{

	return (write(1, &c, 1));
}
