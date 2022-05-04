#include<stdio.h>
#include<conio.h>
void fun()
{
	int num1,num2;
	printf("enter two nos");
	scanf("%d%d",&num1,&num2);
	
	if(num1>=20&&num1<=50 || num2>=20&&num2<=50 )
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
	fun();
}
