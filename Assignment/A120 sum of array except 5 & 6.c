#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,sum=0,x=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	    int a[n];
		printf("enter the array element\n");
		for(i=0;i<n;i++)
		{
		   scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
	{
		if(a[i]==5)
		{
		   x=1;
		}
		else if(a[i]==5 && a[i]==6)
		{
		   x=0;
		}
		else if(x==0)
		{
			sum=sum+a[i];
		}
	}
	printf("sum of given array except 5 and 6 is %d",sum);
}
