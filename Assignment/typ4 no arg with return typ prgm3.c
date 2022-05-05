#include<stdio.h>
#include<conio.h>
int fun()
{
	int p,r,t;
	float a;
	printf("calculate simple interest\n");
	printf("enter principal\n");
	scanf("%d",&p);
	printf("enter rate of interest\n");
	scanf("%d",&r);
	printf("enter time\n");
	scanf("%d",&t);
	
	a=(p*r*t)/100;
	
	return a;
}
void main()
{
	int x;
	x=fun();
	printf("%d",x);
}
