#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
	printf("enter matrices of 3*3 matrix\n");
	
	printf("enter matrix of a\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
    }
    printf("enter matrix of b\n");
    	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
	{
		printf("b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
	}
    }
    	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
	{
		for(k=0;k<=2;k++)
	{
		sum=sum+(a[i][k]*b[k][j]);
	}	
        c[i][j]=sum;
        sum=0;
			
	}
	}
	printf("resultant matrix\n");
	    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
	{
		printf("[%d][%d]=%d",i,j,c[i][j]);
		
		printf("\n");
	}
    }

}
