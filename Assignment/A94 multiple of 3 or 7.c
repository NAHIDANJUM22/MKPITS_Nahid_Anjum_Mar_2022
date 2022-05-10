#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter any no\n");
	scanf("%d",&a);
	
	if(a%3==0)
	{
		printf("%d is a multiple of 3",a);
	}
	else if(a%7==0)
	{
		printf("%d is a multiple of 7",a);
	}
	else
	{
		printf("%d is not a multiple of 3 or 7",a);
	}
}
