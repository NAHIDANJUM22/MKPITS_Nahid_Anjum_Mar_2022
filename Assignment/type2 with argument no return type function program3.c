#include<stdio.h>
#include<conio.h>
void fun(int x,int y,int z)
{
	float a;
	printf("calculate simple interest\n");
	
	a=(x*y*z)/100;
	
	printf("Simple Interest =%f",a);
}
void main()
{
	int p,r,t;
	printf("enter principal\n");
	scanf("%d",&p);
	printf("enter rate of interest\n");
	scanf("%d",&r);
	printf("enter time\n");
	scanf("%d",&t);
	fun(p,r,t);
}
