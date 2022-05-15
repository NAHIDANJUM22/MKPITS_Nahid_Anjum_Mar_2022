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
	for(i=0;i<=4;i++)  //bubble sorting
	{
		for(j=0;j<=4-i;j++)
		{
			if(a[j]>a[j+1])  //swapping logic
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		
		}
	}
	printf("after sorting 5 element");
		for(i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
}
