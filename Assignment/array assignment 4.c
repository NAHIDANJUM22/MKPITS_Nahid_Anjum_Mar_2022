#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,sum=0;
	printf("enter 5 element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sum of array element ");
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
