#include<stdio.h>
#include<conio.h>

main()
{
	int choice,a,b,res;
	
	printf("press 1 for addition \n");
	printf("press 2 for subtraction \n");
	printf("press 3 for multiplication \n");
	printf("press 4 for division \n");
	printf("enter your choice \n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		
		printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a+b;
		printf("addition of number=%d",res);
	}
	else
    if(choice==2)
	{
		
		printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a-b;
		printf("subtraction of number=%d",res);
	}
	else
	if(choice==3)
	{
		
		printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a*b;
		printf("multiplication of number=%d",res);
	}
	else
	if(choice==4)
	{
		
		printf("enter 2 number");
		scanf("%d%d",&a,&b);
		res=a/b;
		printf("division of number=%d",res);
	}
	else
	{
		printf("invalid input!");	
	}
}
