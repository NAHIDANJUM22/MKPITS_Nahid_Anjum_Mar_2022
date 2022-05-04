#include<stdio.h>
#include<conio.h>
void fun(int a,int b)
{
	if(a>=20&&a<=50 || b>=20&&b<=50 )
	{
		printf("true");
	}
	else
	{
		printf("false");
	}	
}
void main()
{
	int num1,num2;
	printf("enter two nos");
	scanf("%d%d",&num1,&num2);
	fun(num1,num2);
}
