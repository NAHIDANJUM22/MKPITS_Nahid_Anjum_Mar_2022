#include<stdio.h>
#include<conio.h>
main()
{
	int num, i,fact=1;
	printf("enter no");
	scanf("%d",&num);
	i=num;
	do
	{
		fact=fact*i;
		i--;
		
	}while(i>=1);
	printf("fact=%d",fact);
	
}
