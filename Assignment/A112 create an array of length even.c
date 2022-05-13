#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,b[2],mid;
	printf("enter the size of an array");
	scanf("%d",&n);
	if(n%2==0)
	{
		int a[n];
		printf("enter the array\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		mid=n/2;
		b[0]=a[mid-1];
		b[1]=a[mid];
		for(i=0;i<2;i++)
		{
			printf("%d",b[i]);
		}
	}
	else
	{
		printf("enter the even size of array");
	}
}
