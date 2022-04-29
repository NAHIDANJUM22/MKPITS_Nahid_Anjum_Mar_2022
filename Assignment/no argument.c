#include<stdio.h>
#include<conio.h>

int a,b,res;
void add()
{
	res=a+b;
	printf("res=%d",res);
}
void sub()
{
	res=a-b;
	printf("res=%d",res);
}
void mul()
{
	res=a*b;
	printf("res=%d",res);
}
void div()
{
	res=a/b;
	printf("res=%d",res);
}
void main()
{
	printf("enter a & b");
	scanf("%d%d",&a,&b);
	add();
	sub();
	mul();
	div();
}

