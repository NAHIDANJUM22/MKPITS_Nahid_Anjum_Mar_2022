#include<stdio.h>
#include<conio.h>
int fun(int n1,int n2)
{
	if(n1>=20&&n1<=50 || n2>=20&&n2<=50 )
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
	int a,b;
	int x;
	printf("enter value a and b");
	scanf("%d%d",&a,&b);
	x=fun(a,b);
	printf("%d",x);
}
