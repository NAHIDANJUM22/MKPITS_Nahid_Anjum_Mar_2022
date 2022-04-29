#include<stdio.h>
#include<conio.h>
void div();
void main()
{
	div();
}
void div()
{
	int n1,n2,res;
	printf("enter 2 no");
	scanf("%d%d",&n1,&n2);
	res=n1/n2;
	printf("res=%d",res);
}
