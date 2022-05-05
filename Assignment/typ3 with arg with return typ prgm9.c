#include<stdio.h>
#include<conio.h>
int fun(int a,int b,int c)
{
	int mul;

	mul=a*b*c;
	
	return mul;
	
}
void main()
{
	int n1,n2,n3;
	int x;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	printf("enter 3rd no");
	scanf("%d",&n3);
	x=fun(n1,n2,n3);
	printf("%d",x);
}
