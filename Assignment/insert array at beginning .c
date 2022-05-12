#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,n,choice;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("insert array element at begining");
	scanf("%d",&choice);
	n++;
	for(i=n;i>1;i--)
	{
		a[i-1]=a[i-2];
	}
	a[0]=choice;
	printf("resultant array element");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
