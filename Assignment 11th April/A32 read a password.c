#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter password\n");
	scanf("%d",&a);
	if(a==1234)
	{
		printf("correct password\n");
	}
	else
	{
		printf("wrong password\n");
	}
}
