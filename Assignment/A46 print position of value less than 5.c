#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
	printf("enter a no");
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i<5)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
	}
}
