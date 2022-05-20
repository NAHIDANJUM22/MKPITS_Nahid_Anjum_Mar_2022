#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	printf("Enter age of the candidate\n");
	scanf("%d",&age);
	
	if(age>18)
	{
	   	printf("candidate is eligible to vote",age);	
	}
	else
	{
		printf("candidate is not eligible to vote",age);
	}
}
