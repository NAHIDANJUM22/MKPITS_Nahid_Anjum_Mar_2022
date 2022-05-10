#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	
	if(a==5||b==5 || a+b==5 || a-b==5)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
