#include<stdio.h>
#include<conio.h>

main()
{
	int a1,b1,a2,b2,dis;
	printf("enter a1\n");
	scanf("%d",&a1);
	printf("enter b1\n");
	scanf("%d",&b1);
	
	printf("enter a2\n");
	scanf("%d",&a2);
	printf("enter b2\n");
	scanf("%d",&b2);
	
	
	dis=sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
	
	printf("distance between 2 points is %d",dis);
}


