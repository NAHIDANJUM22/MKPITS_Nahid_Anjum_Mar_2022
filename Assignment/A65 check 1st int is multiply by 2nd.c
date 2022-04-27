#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2;
	printf("check weather the 1st integer is multiple of 2nd integer");
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	
	if(n1%n2==0)
	{
		printf("%d is multiple of %d",n1,n2);
	}
	else
	{
		printf("%d is not multiple of %d",n1,n2);
	}
}
