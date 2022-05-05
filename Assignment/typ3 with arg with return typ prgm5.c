#include<stdio.h>
#include<conio.h>
int fun(int a,int b)
{
	float res;
	if(a>b)
	{
		res=a/b;
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void main()
{
	int x,y;
	int a;
	printf("enter 2 no x and y\n");
	scanf("%d%d",&x,&y);
	a=fun(x,y);
	printf("%d",a);
}
