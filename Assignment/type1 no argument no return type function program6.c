#include<stdio.h>
#include<conio.h>
void fun()
{
	int num,n1=51,r;
	printf("enter no");
	scanf("%d",&num);
	
	if(num>n1)
	{
		r=(n1-num)*3;
		printf("result=%d",r);
	}
	else
	{
		r=n1-num;
		printf("result=%d",r);
	}
}
void main()
{
	fun();
}
