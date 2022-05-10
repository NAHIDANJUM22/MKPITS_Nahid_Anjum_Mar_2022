#include<stdio.h>
#include<conio.h>
main()
{
	int s,m,l;
	printf("enter s,m and l\n");
	scanf("%d%d%d",&s,&m,&l);
	
	if(s-m==m-l)
	{
		printf("true");
	}
	
	else
	{
		printf("false");
	}
}
