#include<stdio.h>
#include<conio.h>
main()
{
	int num,n1,n2,n3,n4,n5,even=0,odd=0;
	printf("enter 5 digit no \n");
	scanf("%d",&num);
	
	n1=num%10;
	num=num/10;
	
	n2=num%10;
	num=num/10;
	
	n3=num%10;
	num=num/10;
	
	n4=num%10;
	num=num/10;
	
	n5=num%10;

	if(n1%2==0)
	{
		even=even+n1;
	}
	else
	{
		odd=odd+n1;
	}
	if(n2%2==0)
	{
		even=even+n2;
	}
	else
	{
		odd=odd+n2;
	}
	if(n3%2==0)
	{
		even=even+n3;
	}
	else
	{
		odd=odd+n3;
	}
	if(n4%2==0)
	{
		even=even+n4;
	}
	else
	{
		odd=odd+n4;
	}
	if(n5%2==0)
	{
		even=even+n5;
	}
	else
	{
		odd=odd+n5;
	}
	printf("%d sum of odd digit no\n",odd);
}
