#include<stdio.h>
#include<conio.h>
main()
{
	int a[6],i,min,position;
	printf("enter any 6 no\n");
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	
	for(i=1;i<6;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			position=i+1;
		}
	}
printf("smallest element is %d at position %d",min,position);
}
