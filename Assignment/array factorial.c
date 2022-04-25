#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,fact=1,j;
	printf("enter 5 array element\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	for(j=a[i];j>=1;j--)
		{
			fact=fact*j;
		
		}
		printf("factorial of %d=%d\n",a[i],fact);
		fact=1;
	}
}
