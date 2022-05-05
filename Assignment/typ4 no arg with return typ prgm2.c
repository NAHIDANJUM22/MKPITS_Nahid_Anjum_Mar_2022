#include<stdio.h>
#include<conio.h>
int fun()
{
	int n1,n2,n3,mul;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	printf("enter 3rd no");
	scanf("%d",&n3);

	mul=n1*n2*n3;
	
	return mul;
	
}
void main()
{
	int x;
	x=fun();
	printf("%d",x);
}
