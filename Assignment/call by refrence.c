#include<stdio.h>
#include<conio.h>

void fun(int * x,int * y) //formal argument
{
	*x=12;
	*y=13;
}
void main()
{
	int a=2,b=3;  // actual argument
	printf("a=%d b=%d",a,b);
	fun(&a,&b);
	printf("a=%d b=%d",a,b);
}
