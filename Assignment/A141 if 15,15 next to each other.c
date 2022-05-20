#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,c=0;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==15 && a[i+1]==15)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
