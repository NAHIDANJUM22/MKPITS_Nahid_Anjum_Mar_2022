#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swapping\n%d \n%d",a,b);
}



