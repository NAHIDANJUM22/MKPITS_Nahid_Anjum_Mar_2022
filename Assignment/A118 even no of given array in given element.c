#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,count=0;
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
			if(a[i]%2==0)
			{
				count=count+1;
			}
		}
	    printf("even no in given array is %d",count);
}
