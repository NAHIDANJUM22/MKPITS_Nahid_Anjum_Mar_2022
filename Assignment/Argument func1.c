#include<stdio.h>
#include<conio.h>

void add();
void fun()
{
	int a=2,b=5;
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
