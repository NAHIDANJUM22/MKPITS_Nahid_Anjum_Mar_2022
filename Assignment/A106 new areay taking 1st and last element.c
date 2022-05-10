#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,j;
	printf("enter size of array element\n");
     scanf("%d",&n);
	 
	 int a[n];
	for(i=0;i<n;i++)
	{
     printf("enter array element\n");
     scanf("%d",&a[i]);
	}
	int b[2];
    b[0]=a[0];
	b[1]=a[n-1];
	for(j=0;j<2;j++)
	{
		printf("%d\n",b[j]);
	}
}
