#include<stdio.h>
#include<conio.h>
void fun(int a,int b)
{
	float res;
	if(a>b)
	{
		res=a/b;
		printf("res=%f",res);
	}
	else
	{
		printf("division not possible");
	}
	
}
void main()
{
	int x,y;
	printf("enter 2 no x and y\n");
	scanf("%d%d",&x,&y);
	fun(x,y);
}
