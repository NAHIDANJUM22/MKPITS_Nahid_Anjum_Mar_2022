#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,x;
	printf("enter the size of an array");
	scanf("%d",&n);
	if(n>=1)
	{
		int a[n];
        printf("enter the array");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		x=a[0];
		a[0]=a[n-1];
		a[n-1]=x;
		
		printf("array after swapping");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	}
    else
	{
		printf("enter the even size of array greater than 1");
	}
}
