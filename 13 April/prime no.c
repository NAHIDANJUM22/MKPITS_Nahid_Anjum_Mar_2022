#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,factor=0;
	printf("enter no\n");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
	if(num%i==0)
	{
		factor++;
	}
	i++;
    }
	if(factor==2)
	{
		printf("no is a prime number");
	}
	else
	{
		printf("no is not a prime number");
	}
}
	

