#include<stdio.h>
#include<conio.h>
int fun()
{
	int x,y;
	printf("enter 2 no x and y\n");
	scanf("%d%d",&x,&y);
	float res;
	if(x>y)
	{
		res=x/y;
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void main()
{
	int a;
    a=fun();
	printf("%d",a);
}
