#include<stdio.h>
#include<conio.h>

void sub();
void main()
{
	sub();
}
void sub()
{
	int n1,n2,res;
	printf("enter 2 no");
	scanf("%d%d",&n1,&n2);
	res=n1-n2;
	printf("res=%d",res);
}
