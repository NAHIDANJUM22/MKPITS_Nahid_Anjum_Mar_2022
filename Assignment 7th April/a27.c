#include<stdio.h>
#include<conio.h>
main()
{
	int a1,a2,a3,a4,a5,pos=0,neg=0;
	printf("enter 1st no");
	scanf("%d",&a1);
	printf("enter 2nd no");
	scanf("%d",&a2);
	printf("enter 3rd no");
	scanf("%d",&a3);
	printf("enter 4th no");
	scanf("%d",&a4);
	printf("enter 5th no");
	scanf("%d",&a5);
	
	if(a1>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
		if(a2>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
		if(a3>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
		if(a4>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
		if(a5>0)
	{
		pos=pos+1;
	}
	else
	{
		neg=neg+1;
	}
	printf("positive no are %d\n",pos);	
	printf("negative no are %d\n",neg);	
}





