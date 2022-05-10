#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,sum=0;
	printf("enter a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a==b+c || b==c+a || c==a+b)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
