
#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,f=0;
	printf("enter 5 no in an array\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==1 && a[i+1]==2 && a[i+2]==3)
	{
		printf("sequence of no 1 2 3 appers in an array\n");
		f=1;
	}
    } 
    
    if(f==0)
	{
		printf("sequence of no 1 2 3 doesn't appers in an array\n");
	}
}
