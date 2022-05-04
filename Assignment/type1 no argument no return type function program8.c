#include<stdio.h>
#include<conio.h>
void fun()
{
	int p,r,t,a;
	printf("calculate simple interest\n");
	
	printf("enter principal\n");
	scanf("%d",&p);
	printf("enter rate of interest\n");
	scanf("%d",&r);
	printf("enter time\n");
	scanf("%d",&t);
	
	a=(p*r*t)/100;
	
	printf("Simple Interest =%d",a);
}
void main()
{
	fun();
}
