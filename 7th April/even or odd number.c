#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter number \n");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d number is even",num);
		
	}
	else
	{
		printf("%d number is odd",num);
	}
}
