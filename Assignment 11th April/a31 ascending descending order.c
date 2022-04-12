#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter 2 no in pair");
	scanf("%d%d",&a,&b);
	if(a!=b && b>a)
	{
		printf("ascending order\n");
	}
	else
	{
		printf("descending order\n");
	}
}
