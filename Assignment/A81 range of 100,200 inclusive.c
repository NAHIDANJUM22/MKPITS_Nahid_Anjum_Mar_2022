#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter no");
	scanf("%d",&n);
	
	if(100<=n && 200>=n)
	{
		printf("no is in range",n);
	}
	else 
	{
		printf("no is not in range",n);
	}
}
