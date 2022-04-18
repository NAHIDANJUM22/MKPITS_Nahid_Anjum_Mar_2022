#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,fact=1;
	printf("enter no");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
			
	}
	printf("fact=%d",fact);
	
}
