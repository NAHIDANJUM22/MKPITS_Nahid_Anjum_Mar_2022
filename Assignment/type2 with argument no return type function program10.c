#include<stdio.h>
#include<conio.h>

void fun(int a)
{
	int n1,n2,n3,bak,arm,b;
	
	b=a;
	
	n1=a%10;
	a=a/10;
	
	n2=a%10;
	a=a/10;
	
	n3=a%10;
	
	arm=(n1*n1*n1+n2*n2*n2+n3*n3*n3);
	
	
	if(b==arm)
	{
		printf("%d number is armstrong",b);
	}
	
	else
	{
		printf("%d number is not armstrong",b);
	}
}
	
void main()
	{
	int num;
	printf("enter 3 digit no \n");
	scanf("%d",&num);
	fun(num);
	}
