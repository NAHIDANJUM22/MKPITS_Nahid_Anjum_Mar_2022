#include<stdio.h>
#include<conio.h>
main()
{
	int num,n1,n2,n3,n4,n5,bak,rev;
	printf("enter 5 digit no");
	scanf("%d",&num);
	
	bak=num;
	
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
	n5=num%10;
	
	rev=n1*10000+n2*1000+n3*100+n4*10+n1*1;
	
	if(bak==rev)
	{
		printf("%d no is pallindrome",bak);
	}
	else
	{
		printf("%d no is not pallindrome",bak);
	}
}
