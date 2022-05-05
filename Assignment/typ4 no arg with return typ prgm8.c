#include<stdio.h>
#include<conio.h>

int fun()
{
    int n1,n2,n3,bak,num,arm;
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
		return 1;
	}
	
	else
	{
		return 0;
	}
}
void main()
{
	
	int x;
	x=fun();
	printf("%d",x);
}
