#include<stdio.h>
#include<conio.h>

main()
{
	int hours,minutes,seconds;
	printf("enter seconds \n");
	scanf("%d",& seconds);

	hours=seconds/3600;
	minutes=(seconds % 3600)/60;
	seconds=seconds-((hours*3600)+(minutes*60));
	
	printf("hours=%d \n",hours);
	printf("minutes=%d \n",minutes);
	printf("seconds=%d \n",seconds);
}
