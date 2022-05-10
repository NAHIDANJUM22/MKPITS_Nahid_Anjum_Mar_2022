#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[3];
	for(i=0;i<3;i++)
	{
     printf("enter array element\n");
     scanf("%d",&a[i]);
	}

	for(i=0;i<3;i++)
	{
		if(a[i]==5 && a[i+1]==7)
		{
		 a[i+1]=1;
		}
	
	}
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);
	}
}
