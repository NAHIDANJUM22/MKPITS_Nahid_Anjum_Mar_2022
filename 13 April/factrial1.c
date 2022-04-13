#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,fact=1;
	printf("enter no\n");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("fact=%d",fact);
}
