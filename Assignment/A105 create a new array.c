#include<stdio.h>
#include<conio.h>
main()
{
	int x[5],y[5],i,z[2],j;
	 
	for(i=0;i<5;i++)
	{
     printf("enter 1st array element\n");
     scanf("%d",&x[i]);
	}

   	for(i=0;i<5;i++)
	{
     printf("enter 2nd array element\n");
     scanf("%d",&y[i]);
	}
	z[0]=x[2];
	z[1]=y[2];
	for(j=0;j<2;j++)
	{
		printf("%d\n",z[j]);
	}
	
}
