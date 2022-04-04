#include<stdio.h>
#include<conio.h>

main()
{
	int num,n,n1,n2,n3,rev;
	
	printf("enter 3 digit no\n");
	scanf("%d",& num);
	
	n1=num%10;
	n=num/10;
	
	n2=n%10;
	n=n/10;
	
	n3=n%10;
	
	rev=(n1*100+n2*10+n3*1);
		
	if(rev==num)
	{
		printf("%d is palindrom number",num);
	}
	
	else
	{
		printf("%d is not palindrom number",num);
	}
}
