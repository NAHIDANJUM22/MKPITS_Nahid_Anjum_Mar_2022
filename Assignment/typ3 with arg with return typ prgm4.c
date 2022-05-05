#include<stdio.h>
#include<conio.h>
int fun(a,b)
{
	int rev=0;
  while(a!=0)
	{
		b=a%10,
	    a=a/10;
	rev=rev*10+b;	
	}
	return rev;	
}
void main()
{
	int n,m;
	int x;
	printf("enter number");
	scanf("%d",&n);
	x=fun(n,m);
	printf("%d",x);
}
