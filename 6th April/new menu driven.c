#include<stdio.h>
#include<conio.h>

main()
{
	int choice,a,b,res;
	printf("enter 1 for addition \n");
	printf("enter 2 for subtraction \n");
	printf("enter 3 for multiplication \n");
	printf("enter 4 for division \n");
	printf("enter your choice \n ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a+b;
		printf("the addition of 2 no =%d",res);
		break;
		
		case 2:
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a-b;
		printf("the subtraction of 2 no =%d",res);
		break;
		
		case 3:
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a*b;
		printf("the multiplication of 2 no =%d",res);
		break;
		
		case 4:
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a/b;
		printf("the addition of 2 no =%d",res);
		break;
		
		default:
		printf("I am in default");
	}
}
