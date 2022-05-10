#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter a\n");
	scanf("%d",&a);
	
	if(a%10<=2 || a%10>=8)
	{
		printf("within 2 of a multiple of 10");
	}
	else
	{
		printf("not within 2 of a multiple of 10");
	}
}
