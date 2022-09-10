#include<stdio.h>
#include <time.h>
/*main - this code shows numbers
 * description - postitve negative and zero
 * end
 */

int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX / 2;



	int num=0;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>0){
		printf("is positive");
}
	if(num<0){
		printf("is negative");
}
	if(num=0){
		printf("is zero");
}


