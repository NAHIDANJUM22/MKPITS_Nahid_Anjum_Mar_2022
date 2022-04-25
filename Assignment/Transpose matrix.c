#include<stdio.h>
#include<conio.h>
main()
{
	int m[2][2],i,j,trans[2][2];
	printf("enter 2*2 matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	    printf("matrix element\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
	    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			trans[j][i]=m[i][j];
		}
	}
	    printf("transpose element\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",trans[i][j]);
		}
		printf("\n");
	}
	
}
