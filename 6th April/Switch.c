#include<stdio.h>
#include<conio.h>

main()
{
	int choice;
	
	printf("enter 1 or 2 or 3\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("in case 1");
		break;
    
		case 2:
		printf("in case 2");
		break;
			
		
		case 3:
		printf("in case 3");
		break;
		
		default:
		printf("I am in default");
    }
			
}
