#include<stdio.h>
#include<conio.h>
int fun()
{
	int a,b;
	printf("enter value a and b");
	scanf("%d%d",&a,&b);
	if(a>=20&&a<=50 || b>=20&&b<=50 )
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
void main()
{
	int x;
	x=fun();
	printf("%d",x);
}
