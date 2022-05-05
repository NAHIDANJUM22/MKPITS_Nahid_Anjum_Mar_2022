#include<stdio.h>
#include<conio.h>

int fun(int a)
{
   int n1=51,r;
   if(a>n1)
	{
		r=(n1-a)*3;
		return 1;
	}
	else
	{
		r=n1-a;
		return 0;
	}
}
void main()
{
	int num;
	int x;
	printf("enter no");
	scanf("%d",&num);
	x=fun(num);
	printf("%d",x);
}
