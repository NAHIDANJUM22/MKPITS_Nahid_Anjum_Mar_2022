#include<stdio.h>
#include<conio.h>
int fun()
{
	int n1,n2;
	int res,sum=0;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		res=(n1+n2)*3;
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int x;
	x=fun();
	printf("%d",x);
}
