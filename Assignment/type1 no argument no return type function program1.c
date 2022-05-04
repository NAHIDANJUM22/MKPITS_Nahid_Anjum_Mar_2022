#include<stdio.h>
#include<conio.h>

void fun()
{
	int num,bak,n1,n2,n3,arm;
	
	printf("enter 3 digit no \n");
	scanf("%d",&num);
	
	bak=num;
	
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	
	arm=(n1*n1*n1+n2*n2*n2+n3*n3*n3);
	
	
	if(bak==arm)
	{
		printf("%d number is armstrong",bak);
	}
	
	else
	{
		printf("%d number is not armstrong",bak);
	}
}
	
void main()
	{
		fun();
	}
	

