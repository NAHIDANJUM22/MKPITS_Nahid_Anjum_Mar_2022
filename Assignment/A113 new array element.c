#include<stdio.h>
#include<conio.h>
main()
{
	int a[3],b[3],c[2],i;
	printf("enter 1st array element\n");
	for(i=0;i<=2;i++)
	{
	    printf("enter the element\n");
		scanf("%d",&a[i]);
	}
	printf("enter 2nd array element\n");
	for(i=0;i<=2;i++)
	{
	    printf("enter the element\n");
		scanf("%d",&b[i]);
	}
	c[0]=a[1];
	c[1]=b[1];
	printf("\nnew array element");
	for(i=0;i<=1;i++)
	{
	  printf("\n%d\n",c[i]);
	}
}
	
