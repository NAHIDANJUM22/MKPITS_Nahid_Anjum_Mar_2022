#include<stdio.h>
#include<conio.h>

main()
{
	int years,months,days;
	printf("enter no of days \n");
	scanf("%d",&days);

	years=days/365;
	months=(days % 365)/30;
	days=days-((years*365)+(months*30));
	
	printf("years=%d \n",years);
	printf("months=%d \n",months);
	printf("days=%d \n",days);
}
