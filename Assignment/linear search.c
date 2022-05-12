//linear search

#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,a[5]={10,20,30,40,50},data,f=0;
	
	printf("enter searching data");
	scanf("%d",&data);
	for(i=0;i<5;i++)
	{
		if(a[i]==data)
		{
			printf("element found at index %d",i);
			f=1;
			break;
		}
	}
	if(f==0)
	{
	   printf("not found");	
	}
}
