#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum=0;
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	
	if(sum>=10 && sum<=20)
	{
		printf("30");
	}
	else
	{
		printf("%d",sum);
	}
}
