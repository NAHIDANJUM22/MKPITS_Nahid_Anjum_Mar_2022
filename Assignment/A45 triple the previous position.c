#include<stdio.h>
#include<conio.h>
main()
{
	int a[7],x,i;
	printf("enter no");
	scanf("%d",&x);
	
	for(i=0;i<7;i++)
	{
		a[i]=x;
		x=x*3;
	}
	for(i=0;i<7;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
