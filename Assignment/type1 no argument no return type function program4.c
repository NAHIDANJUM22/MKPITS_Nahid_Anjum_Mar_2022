#include<stdio.h>
#include<conio.h>
void fun()
{
	int n1,n2,res,sum=0;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		res=(n1+n2)*3;
		printf("res=%d",res);
	}
	else
	{
		printf("enter nos are not same");
	}
}
void main()
{
	fun();
}
