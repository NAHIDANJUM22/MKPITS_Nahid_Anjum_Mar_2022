#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,ser,f=0;   //flag stamping
	printf("enter 5 element\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no you want to search");
	scanf("%d",&ser);
	for(i=0;i<=4;i++)        //unsorted 
	{
		if(a[i]==ser)      // linear search
		{
			f=1;
		}
	}
	if(f==1)
	{
		printf("present");
	}
	else
	{
		printf("not present");
	}
	
	
}
