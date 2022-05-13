#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,b[3];
	printf("enter the size of an array");
	scanf("%d",&n);
    int a[n];
    printf("enter the array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	   b[0]=a[2];
	   b[1]=a[3];
	   b[2]=a[4];
	for(i=0;i<3;i++)
	{
		printf("%d",b[i]);
	}
}
