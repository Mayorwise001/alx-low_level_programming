#include <stdlib.h>
#include<stdio.h>
#include <time.h>

/**
    * main - Prints compared numbers
    * Return : Returns prints 
 
 
 
 */


int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 5)
			printf("%d Last digit of n is and is greater than 5\n", n);
		else if (n == 0)
			printf("%d Last digit of n is and is 0\n", n);
		else if (n < 6 && n!=0)
			printf("%d Last digit of n is and is less than 6 and not 0");
		return (0);
}
