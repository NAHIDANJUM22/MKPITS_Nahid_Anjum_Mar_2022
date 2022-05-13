#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,x,mid;
	printf("enter the size of array\n");
	scanf("%d",&n);
	if(n%2!=0 && n>=1)
	{
		int a[n];
		printf("enter the array element\n");
		for(i=0;i<n;i++)
		{
		   scanf("%d",&a[i]);
		}
		x=a[0];
		if(x<a[n-1])
		{
			x=a[n-1];
		}
		mid=n/2;
		if(x<a[mid])
		{
			x=a[mid];
		}
		printf("largest element of a given array %d",x);
	}
	else
	{
		printf("enter the size of array greater than 1");
	}
}
