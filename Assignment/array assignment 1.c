#include<stdio.h>
#include<conio.h>
main()
{
	int a[4],i;
	printf("enter 5 element\n");

	for(i=0;i<=4;i++)
	{
	  	scanf("%d",&a[i]);	
	}
	printf("\n reverse array element ");
	for(i=4;i>=0;i--)
	{
		printf("%d",a[i]);
	}
		
    printf("\n");
}
