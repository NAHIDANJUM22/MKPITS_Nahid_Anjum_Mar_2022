#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum,sub,mul,div;
	printf("enter 1st and 2nd no\n");
	scanf("%d%d",&a,&b);
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("sum = %d\n",sum);
	printf("sub = %d\n",sub);
	printf("mul = %d\n",mul);
	printf("div = %d\n",div);
}
