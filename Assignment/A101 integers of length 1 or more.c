#include<stdio.h>
#include<conio.h>
main()
{
	int n,i;
	 printf("enter size of array ");
     scanf("%d",&n);
     
	int a[n];
	for(i=0;i<n;i++)
	{
     printf("enter array element");
     scanf("%d",&a[n]);
	}
	if(a[0]==a[n-1])
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
