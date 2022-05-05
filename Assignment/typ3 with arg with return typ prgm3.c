#include<stdio.h>
#include<conio.h>

int fun(int a)
{
    int n1,n2,n3,bak,arm;
    
    bak=a;
	
	n1=a%10;
	a=a/10;
	
	n2=a%10;
	a=a/10;
	
	n3=a%10;
	
	arm=(n1*n1*n1+n2*n2*n2+n3*n3*n3);
		

   if(bak==arm)
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
	int num;
	int x;
	printf("enter 3 digit no \n");
	scanf("%d",&num);
	x=fun(num);
	printf("%d",x);
}
