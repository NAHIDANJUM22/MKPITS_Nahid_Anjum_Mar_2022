#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,factor=0;
	printf("enter no\n");
	scanf("%d",&num);
	i=1;
	do
	{
		if(num%i==0)
		{
			factor++;
		}
	i++;
	}while(i<=num);
	if(factor==2)
	{
		printf("prime no");
	}
	else
	{
		printf("not a prime no");
	}
	
}
	   
