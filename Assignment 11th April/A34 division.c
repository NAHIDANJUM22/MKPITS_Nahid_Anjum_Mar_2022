#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	float res;
	printf("enter 2 no x and y\n");
	scanf("%d%d",&x,&y);
	
	if(x>y)
	{
		res=x/y;
		printf("res=%f",res);
	}
	else
	{
		printf("division not possible");
	}
	
}
