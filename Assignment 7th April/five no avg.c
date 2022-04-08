#include<stdio.h>
#include<conio.h>
main()
{
  int a1,a2,a3,a4,a5,pos=0,neg=0,total,avg;
  printf("input 1st no");
  scanf("%d",&a1);
  printf("input 2nd no");
  scanf("%d",&a2);
  printf("input 3rd no");
  scanf("%d",&a3);
  printf("input 4th no");
  scanf("%d",&a4);
  printf("input 5th no");
  scanf("%d",&a5);	
		
	if(a1>0)
	{
		pos=pos+1;
		total+=a1;
	}
	else
	{
		neg=neg+1;
	}
		if(a2>0)
	{
		pos=pos+1;
		total+=a2;
	}
	else
	{
		neg=neg+1;
	}
		if(a3>0)
	{
		pos=pos+1;
		total+=a3;
	}
	else
	{
		neg=neg+1;
	}
		if(a4>0)
	{
		pos=pos+1;
		total+=a4;
	}
	else
	{
		neg=neg+1;
	}
		if(a5>0)
	{
		pos=pos+1;
		total+=a5;
	}
	else
	{
		neg=neg+1;
	}
		
	avg=total/pos;
	
    printf(" positive no are %d\n",pos);
    printf(" average of positive no are %d",avg);
	
}
