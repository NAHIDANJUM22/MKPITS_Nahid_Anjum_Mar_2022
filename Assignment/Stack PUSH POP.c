#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int n=10,x,i,temp,stack[10]={3,4,5,8},top=3;
    void push()  // insert
	{
		if (top==n-1)
		{
			printf("overflow");
		}
		else
		{
			top=top+1;
		    stack[top]=x;
		}
	}
	void pop()  // remove
	{
	    if (top==-1)
		{
			printf("underflow // stack is empty");
		}
		else
		{
		   temp=stack[top];
           top=top-1;
		   printf("%d is removed\n",temp);
		}
		
	}
	void dis()
	{
		for(i=top;i>-1;i--)
		{
		   	printf("%d\n",stack[i]);
		}
	}
	
main()
{
	int choice;
	while(1)
	{
	  printf("enter 1 for push \n");
	  printf("enter 2 for pop \n");
      printf("enter 3 for display \n");
      printf("enter 4 for exit\n");
	  printf("enter your choice \n ");
	  scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("enter item to add\n");
		scanf("%d",&x);
		push();
		break;
		
		case 2:
		pop();
		break;
		
		case 3:
		dis();
		break;
		
		case 4:
		exit(0);
		break;
		
		default:
		printf("invalid input");
		break;
    }
    }
}
