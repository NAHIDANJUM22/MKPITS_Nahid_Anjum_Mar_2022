#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int n=5,i,x,queue[5],front=-1,rear=-1;
    void enqueue()  // insert
	{
		if (rear==n-1)
		{
			printf("overflow");
		}
		else
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			queue[rear]=x;
		}
		else
		{
			rear=rear+1;
		    queue[rear]=x;
		}
	}
	void dequeue()  // remove
	{
	    if (front==-1 && rear==-1)
		{
			printf("underflow // queue is empty");
		}
		else
		{
		  printf("%d is removed\n",queue[front]);
		  front=front+1;
	    }
		
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
	
		

	void dis()
	{
		for(i=front;i<rear;i++)
		{
		   	printf("%d\n",queue[i]);
		}
	}
	
main()
{
	int choice;
	while(1)
	{
	  printf("enter 1 for enqueue \n");
	  printf("enter 2 for dequeue \n");
      printf("enter 3 for display \n");
      printf("enter 4 for exit\n");
	  printf("enter your choice \n ");
	  scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("enter item to add\n");
		scanf("%d",&x);
		enqueue();
		break;
		
		case 2:
		dequeue();
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
