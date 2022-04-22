#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	
    printf("enter the values of X and Y \n");
	scanf("%d%d",&x,&y);

	if(x>0 && y>0)
	{
	  printf("the coordinate points lies on the 1st quandrant\n");
		
	}
	else
	if(x<0 && y>0)
	{
		printf("the coordinate points lies on the 2nd quandrant\n");
	}
	else
	if(x<0 && y<0)
	{
		printf("the coordinate points lies on the 3rd quandrant\n");
		
	}
	else
	{
	printf("the coordinate points lies on the 4th quandrant");
	}
			
}
