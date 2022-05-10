#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,p;
	 printf("enter size of array ");
     scanf("%d",&n);
     
	int a[n];
	for(i=0;i<n;i++)
	{
     printf("enter array element");
     scanf("%d",&a[n]);
	}
	printf("enter size of array ");
    scanf("%d",&p);
     
	int c[p];
	for(i=0;i<p;i++)
	{
     printf("enter array element");
     scanf("%d",&c[p]);
	}
	if(a[0]==c[0] || a[n-1]==c[p-1])
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
