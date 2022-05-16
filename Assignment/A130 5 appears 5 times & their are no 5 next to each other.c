#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,f=0;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)  
	{
		if(a[i]==5 && a[i+1]!=5 && a[i+2]==5)
		{
			f=f+1;
		}
	}
	if(f==4)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
