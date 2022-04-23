#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	double i,s=0.0;
	
	printf("value of s\n where s=1+1/2+1/3+......1/n\n enter value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		s=s+1/i;
	}
	printf("%f",s);
}
