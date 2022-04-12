#include<stdio.h>
#include<conio.h>
main()
{
	int n,m,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		n=n/10;
		sum=sum+m;
	}
	printf("sum=%d",sum);
}
