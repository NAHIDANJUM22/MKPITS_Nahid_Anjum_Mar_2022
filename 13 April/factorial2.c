#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,fact=1;
	printf("enter no\n");
	scanf("%d",&num);
	i=num;
	while(i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("fact=%d",fact);
}
