#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter any no\n");
	scanf("%d",&a);
	
	if(a%13==0 || a%13==1)
	{
		printf("%d multiple of 13",a);
	}
	else
	{
		printf("%d one more than a multiple of 13",a);
	}
}
