#include<stdio.h>
#include<conio.h>

main()
{
	int num,n,n1,n2,n3,arm;
	
	printf("enter 3 digit no\n");
	scanf("%d",& num);
	
	n1=num%10;
	n=num/10;
	
	n2=n%10;
	n=n/10;
	
	n3=n%10;
	
	arm=(n1*n1*n1+n2*n2*n2+n3*n3*n3);
	
	
	if(num==arm)
	{
		printf("%d number is armstrong");
	}
	
	else
	{
		printf("%d number is not armstrong");
	}
}
