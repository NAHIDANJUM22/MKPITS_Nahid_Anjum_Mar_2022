#include<stdio.h>
#include<conio.h>
main()
{
	int y;
	printf("Enter year\n");
	scanf("%d",&y);
	
	if(y%4==0)
	{
	   	printf("year is leap year\n",y);	
	}
	else
	{
		printf("year is not leap year\n",y);
	}
}
