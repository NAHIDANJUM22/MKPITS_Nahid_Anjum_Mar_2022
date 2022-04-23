#include<stdio.h>
#include<conio.h>
main()
{
	int i,d;
	printf("enter any no\n");
	scanf("%d",&d);
	printf("divisor are %d",d);
	for(i=0;i<=d;i++)
	{
		if((d%i)==0)
		{
			printf("%d",i);
			printf("\n");
		}
	
	}
	
}
