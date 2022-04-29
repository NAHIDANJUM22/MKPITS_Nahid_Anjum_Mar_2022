#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum=0;
	printf("enter 1st no");
	scanf("%d",&a);
	printf("enter 2nd no");
	scanf("%d",&b);
	
	sum=a+b;
	
	if(a==30 || b==30 || sum==30)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
