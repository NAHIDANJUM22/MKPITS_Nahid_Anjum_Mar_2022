#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,res;
	char choice;
	printf("enter + for addition \n");
	printf("enter - for subtraction \n");
	printf("enter * for multiplication \n");
	printf("enter / for division \n");
	printf("enter your choice \n ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '+':
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a+b;
		printf("the addition of 2 no =%d",res);
		break;
		
		case '-':
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a-b;
		printf("the subtraction of 2 no =%d",res);
		break;
		
		case '*':
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a*b;
		printf("the multiplication of 2 no =%d",res);
		break;
		
		case '/':
		printf("enter 2 no");
		scanf("%d%d",&a,&b);
		res=a/b;
		printf("the addition of 2 no =%d",res);
		break;
		
		default:
		printf("I am in default");
	}
}
