#include<stdio.h>
#include<conio.h>

void fun(int a)
{
	int n1=51,r;
	
	if(a>n1)
	{
		r=(n1-a)*3;
		printf("result=%d",r);
	}
	else
	{
		r=n1-a;
		printf("result=%d",r);
	}
}
void main()
{
	int num;
	printf("enter no");
	scanf("%d",&num);
	fun(num);
}
