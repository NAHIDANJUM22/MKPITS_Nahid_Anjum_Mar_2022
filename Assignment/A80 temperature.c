#include<stdio.h>
#include<conio.h>
main()
{
	int t;
	printf("enter temperature");
	scanf("%d",&t);
	
	if(t<0)
	{
		printf("temperature is less than 0");
	}
	else if (t>100)
	{
		printf("temperature is greater than 100");
	}
	else 
	{
		printf("temperature is not in between 0 and 100");
	}
	
}
