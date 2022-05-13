#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,sum=0;
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
			if(a[i]!=17)
			{
				sum=sum+a[i];
			}
		}
	    printf("sum of given array except 17 is %d",sum);
}
