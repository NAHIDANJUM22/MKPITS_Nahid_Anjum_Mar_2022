#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,l,f=1;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter length");
	scanf("%d",&l);
	int a[n];
	printf("enter element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		if(a[i]!=a[n - l + i])
		{
			f=0;
		}
	}
	if(f==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
