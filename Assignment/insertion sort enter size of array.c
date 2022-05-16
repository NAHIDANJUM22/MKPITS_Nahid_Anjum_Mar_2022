#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,temp;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter 5 element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)  
	{
		temp=a[i];
		j=i-1;
		while(i>0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("after sorting 5 element");
		for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
