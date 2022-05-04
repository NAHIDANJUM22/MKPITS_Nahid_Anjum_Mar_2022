#include<stdio.h>
#include<conio.h>
void fun(a,b)
{
	int rev=0;
	
	
	while(a!=0)
	{
		b=a%10,
	    a=a/10;
	
	    rev=rev*10+b;	
	}
	 printf("rev=%d",rev);	
}
void main()
{
	int n,m;
	printf("enter number");
	scanf("%d",&n);
	fun(n,m);
}
