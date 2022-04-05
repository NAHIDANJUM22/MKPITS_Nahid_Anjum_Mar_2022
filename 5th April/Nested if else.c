#include<stdio.h>
#include<conio.h>

main()
{
	int p1,p2,p3;
	
	printf("enter p1,p2,p3 \n");
	scanf("%d %d %d",&p1,&p2,&p3);
	
	if(p1>p2 && p1>p3)
	{
		printf("p1 is greater",p1);
	}
	
	if(p2>p1 && p2>p3)
	{
		printf("p2 is greater",p2);
	}
	else
	{
		printf("p3 is greater",p3);	
	}
}
