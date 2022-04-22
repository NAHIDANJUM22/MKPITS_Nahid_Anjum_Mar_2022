#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,ser;
	printf("enter 5 element\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no you want to search");
	scanf("%d",&ser);
	for(i=0;i<=4;i++)
	{
		if(a[i]==ser)
		{
			printf("present");
		}
	}
}
