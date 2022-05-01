#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,count=0;
	printf("enter 5 no in an array\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==5 && (a[i+1]==5 || a[i+1]==6))
	{
		count=count+1;
	}
    } 
	    printf("%d",count);
}
