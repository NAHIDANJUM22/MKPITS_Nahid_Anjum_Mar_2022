#include<stdio.h>
#include<conio.h>

int fun()
{
   int n1=51,r,num;
   printf("enter no");
   scanf("%d",&num);
   if(num>n1)
	{
		r=(n1-num)*3;
		return 1;
	}
	else
	{
		r=n1-num;
		return 0;
	}
}
void main()
{
	int x;
	x=fun();
	printf("%d",x);
}
