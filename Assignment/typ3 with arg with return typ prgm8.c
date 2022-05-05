#include<stdio.h>
#include<conio.h>
int fun(int x,int y,int z)
{
	float a;
	printf("calculate simple interest\n");
	
	a=(x*y*z)/100;
	
	return a;
}
void main()
{
	int p,r,t;
	int x;
	printf("enter principal\n");
	scanf("%d",&p);
	printf("enter rate of interest\n");
	scanf("%d",&r);
	printf("enter time\n");
	scanf("%d",&t);
	x=fun(p,r,t);
	printf("%d",x);
}
