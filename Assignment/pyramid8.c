#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
		  printf("*");	
		}
		printf("\n");
	}

  for(r=2;r<=4;r++)
{
	for(c=1;c<=4-r+1;c++)
	{
	 printf("*");	
	}
	printf("\n");
}
}

