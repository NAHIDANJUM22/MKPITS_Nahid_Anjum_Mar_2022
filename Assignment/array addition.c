#include<stdio.h>
#include<conio.h>
main()
{
	int m1[2][2],m2[2][2],res[2][2],i,j;
	printf("enter 2*2 matrix");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m[%d]m[%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("m[%d]m[%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			res[i][j]=m1[i][j]+m2[i][j];
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("res[%d][%d]=%d",i,j,res[i][j]);
			
		}
	}
}
