#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	printf("enter x and y\n");
	scanf("%d%d",&x,&y);
	
	if(x==y)
	{
		return 0;
	}
	else if(x%5==y%5)
	{
		return x;
	}
	else
	{
		return y;
	}
}
