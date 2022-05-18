#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,f=0;
	printf("enter size of array");
	scanf("%d",&n);
    int a[n];
	printf("enter element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]>a[i] && a[i+2]>a[i+1])
		{
			f=1;
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
