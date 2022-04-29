#include<stdio.h>
#include<conio.h>
void add(int x,int y)
{
	int r;
	r=x+y;
	printf("%d",r);
}
void sub(int x,int y)
{
	int r;
    r=x-y;
	printf("%d",r);
}
void mul(int x,int y)
{
	int r;
    r=x*y;
	printf("%d",r);
}
void div(int x,int y)
{
	int r;
    r=x/y;
	printf("%d",r);
}
void main()
{
	int n1,n2;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	add(n1,n2);
	sub(n1,n2);
	mul(n1,n2);
	div(n1,n2);
}

