#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2;
	printf("input the 1st no\n ");
	printf("input the 2nd no\n ");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
	
	if(num1%num2==0)
	{
	  printf("multiplied");	
	}
	else
	{
	  printf("not multiplied");
	}
    } 
    else
    {
	
	if(num2%num1==0)
	{
	  printf("multiplied");	
	}
	else
	{
	  printf("not multiplied");
	}
    }
}
