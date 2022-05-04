#include<stdio.h>
#include<conio.h>
void fun(int a,int b)
{
	int res,sum=0;
	
	if(a==b)
	{
		res=(a+b)*3;
		printf("res=%d",res);
	}
	else
	{
		printf("enter nos are not same");
	}
}
void main()
{
	int n1,n2;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	fun(n1,n2);
}
