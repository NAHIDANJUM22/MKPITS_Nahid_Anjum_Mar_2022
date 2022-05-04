#include<stdio.h>
#include<conio.h>
void fun(int x);
void main()
{
	fun(1);
}
void fun(int x)
{
	if(x==10)
	return;
	printf("%d",x);
	fun(x+1);
	printf("%d\n",x);
}
