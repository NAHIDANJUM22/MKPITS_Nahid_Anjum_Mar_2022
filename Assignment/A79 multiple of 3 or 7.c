#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter any no");
	scanf("%d",&n);
	
	if(n%3==0)
	{
		printf("%d is a multiple of 3",n);
	}
	else if(n%7==0)
	{
		printf("%d is a multiple of 7",n);
	}
	else
	{
			printf("%d is not a multiple of 3 or 7",n);
	}
}
