#include<stdio.h>
#include<conio.h>
main()
{
	int a[7],b,i;
	for(i=0;i<7;i++)
	{
		printf("enter no");
		scanf("%d",&b);
		if(b>0)
		{
			a[i]=b;
		}
		else
		{
			a[i]=100;
		}
		for(i=0;i<7;i++)
		{
			printf("a[%d]=%d",i,a[i]);
			
		}
	}
}
