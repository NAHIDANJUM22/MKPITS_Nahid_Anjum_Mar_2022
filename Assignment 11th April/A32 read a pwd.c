#include<stdio.h>
#include<conio.h>
main()
{
	int p;
	int a=10;

	while(a!=0)
	{
	printf("enter a password\n");
	scanf("%d",&p);

	if(p=1234)
	{
		printf("correct password");
		a=0;
	}
	else
	{
		printf("wrong password");
	}
	}
	
}
