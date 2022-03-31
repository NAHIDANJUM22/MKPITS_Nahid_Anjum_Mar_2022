#include<stdio.h>
#include<conio.h>

void main()
{
	int num1,num2,sw;
	printf("enter 2 number");
	scanf("%d %d",&num1,&num2);
	
	sw=num2;
	num2=num1;
	num1=sw;
	
	printf("after swapping");
	printf("num1=%d num2=%d",num1,num2);
	
}
