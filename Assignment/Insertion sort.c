#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,j,temp;
	printf("enter 5 element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=4;i++)  
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
		for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
}
