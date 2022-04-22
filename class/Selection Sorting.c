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
	for(i=0;i<=4;i++)  //selection sorting
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])  //swapping logic
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		
		}
	}
	printf("after sorting 5 element");
		for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
}
