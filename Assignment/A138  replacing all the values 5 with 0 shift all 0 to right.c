#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x=0;
	printf("enter the array size");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		if(a[i]==5)
		{
		    a[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[x]=a[i];
			x=x+1;
		}
	}
	for(i=x;i<n;i++)
	{
	  b[i]=0;
	}
	printf("new array");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
}
