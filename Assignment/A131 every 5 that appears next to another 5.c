#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,c;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter element of array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==5)
		{
			if(a[i+1]==5)
			{
			   c=c+1;	
			}
		}
	}
	if(c>0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
