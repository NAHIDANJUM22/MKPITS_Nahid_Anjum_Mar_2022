#include<stdio.h>
#include<conio.h>
main()
{
	int day,month,year,lastdate;
	printf("enter day,month and four digit year\n");
	scanf("%d%d%d",&day,&month,&year);
	day=day+1;
	if(month==2 && ((year%400==0) || (year%4==0 && year%100!=0)))
	lastdate=29;
	else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	lastdate=31;
    else if(month==4 || month==6 || month==9 || month==11)
	lastdate=30;
	else
	lastdate=28;
	
	if(day>lastdate)
	{
		day=1;
		month=month+1;
	}
	  if(month>12)
	  {
	  	month=1;
	  	year=year+1;
	  }
	
	printf("\nThe date of the next day is:%d %d %d\n",day,month,year);
}
