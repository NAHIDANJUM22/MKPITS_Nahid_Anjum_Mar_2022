#include<stdio.h>
#include<conio.h>
void fun()
{
	int a,b;
	printf("enter value a and b");
	scanf("%d%d",&a,&b);
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
	fun();
}
