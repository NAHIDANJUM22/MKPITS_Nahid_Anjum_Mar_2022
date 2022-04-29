#include<stdio.h>
#include<conio.h>
void add();
void fun()
{
	int a,b;
	printf("enter a & b\n");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int x,int y)
{
	int r;
	r=x+y;
	printf("%d",r);
}

void main()
{
	fun();
}
