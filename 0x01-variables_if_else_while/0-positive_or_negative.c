#include<stdio.h>
#include<stdlib.h>
#include <time.h>
/*main - this code shows numbers
 * description - postitve negative and zero
 * end
 * return 0
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;



	
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>0){
		printf("is positive");
}
	if(num<0){
		printf("is negative");
}
	if((num=0)){
		printf("is zero");
	return (0);}

}


