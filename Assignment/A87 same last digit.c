#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2;
	printf("enter two nos\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1%10==num2%10)
	{
		printf("same last digit\n");
	}
	else
	{
		printf("different last digit\n");
	}
}

