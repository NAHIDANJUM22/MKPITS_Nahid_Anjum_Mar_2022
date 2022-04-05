#include<stdio.h>
#include<conio.h>

main()
{
	int choice;
	
	printf("press 1 for addition \n");
	printf("press 2 for subtraction \n");
	printf("press 3 for multiplication \n");
	printf("press 4 for division \n");
	printf("enter your choice \n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("add program");
	}
	else
    if(choice==2)
	{
		printf("sub program");
	}
	else
	if(choice==3)
	{
		printf("mul program");
	}
	else
	if(choice==4)
	{
		printf("div program");
	}
	else
	{
		printf("invalid choice");	
	}
}
