#include<stdio.h>
#include<conio.h>
int fun(int x,int y)
{
	int add;
	add=x+y;
	return add;
}
int fun1(int x,int y)
{
	int sub;
	sub=x-y;
	return sub;
}
void main()
{
	int a,b,res,res1;
	printf("enter value of a & b");
	scanf("%d%d",&a,&b);
	
	res=fun(a,b);
	res1=fun1(a,b);
	printf("%d",res);
	printf("%d",res1);
}
