#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,c=1;
	printf("enter no of lines\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d",c);
			c++;
		}
		printf("\n");
	}
}
