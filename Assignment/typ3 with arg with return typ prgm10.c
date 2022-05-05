#include<stdio.h>
#include<conio.h>
int fun(int a,int b)
{
	int res,sum=0;
	
	if(a==b)
	{
		res=(a+b)*3;
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int n1,n2;
	int x;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	x=fun(n1,n2);
	printf("%d",x);
}
