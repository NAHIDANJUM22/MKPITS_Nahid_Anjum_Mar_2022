#include<stdio.h>
#include<conio.h>
main()
{
	int day_diff=0;
	int day[21]={1,4,5,6,7,8,11,12,13,14,15,18,19,20,21,22,25,26,27,28,29};
	int d1,m1,y1,d2;
	printf("enter date 1\n");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("enter date 2\n");
	scanf("%d%d%d",&d2,&m1,&y1);
	day_diff =30-9;
	if(d2>d1)
	{
		printf("days difference=%d days",day_diff);
	}
	else if(d1==d2)
	{
		printf("days difference= 0 days");
	}
	else
	{
		printf("the date should be greater than from date");
	}
}
