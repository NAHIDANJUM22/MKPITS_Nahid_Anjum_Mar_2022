#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,factor=0;
	printf("enter no");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor++;
		}
    }  
	
	if(factor==2)
	{
		printf("prime no");
	}
	else
	{
		printf("not a prime no");
	}

}
	
	
