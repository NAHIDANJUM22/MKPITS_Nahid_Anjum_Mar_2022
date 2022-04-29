#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	
	if((100-num)<=10||(200-num)<=10)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
