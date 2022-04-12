#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	
    printf("enter the values of X and Y coordinate\n");
	scanf("%d%d",&x,&y);

	if(x>0 && y>0)
	{
	  printf("the coordinate points lies on the 1st quandrant%d%d\n",&x,&y);
		
	}
	else
	if(x<0 && y>0)
	{
		printf("the coordinate points lies on the 2nd quandrant%d%d\n",&x,&y);
	}
	else
	if(x<0 && y<0)
	{
		printf("the coordinate points lies on the 3rd quandrant%d%d\n",&x,&y);
		
	}
	else
	if(x>0 && y<0)
	{
	printf("the coordinate points lies on the 4th quandrant%d%d\n",&x,&y);
	}
	else
	if(x==0 && y==0)
	{
	printf("the coordinate points lies at the origin%d%d\n",&x,&y);
	}
	else
	{
	printf("invalid");
	}
	
			
}
