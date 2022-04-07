#include<stdio.h>
#include<conio.h>

main()
{

	int dis;
	float fuel,avg;
	printf("total distance traveled in km \n");
	scanf("%d",&dis);
	printf("total fuel spent in liters \n");
	scanf("%f",&fuel);
	
	avg=dis/fuel;
	
	printf("the avg consumption=%f",avg);
		
}
