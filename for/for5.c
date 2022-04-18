#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,fact=1;
	printf("enter no");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
			
	}
	printf("fact=%d",fact);
	
}
