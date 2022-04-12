#include<stdio.h>
#include<conio.h>
main()
{
	int n,m,rev=0;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		n=n/10;
		rev=rev*10+m;
	}
	printf("rev=%d",rev);
}
