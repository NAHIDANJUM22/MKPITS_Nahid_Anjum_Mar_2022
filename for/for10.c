#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,rev=0;
	printf("enter no");
	scanf("%d",&num);
	for(;num!=0;)
	{
	m=num%10;
	num=num/10;
	rev=rev*10+m;
    }
    printf("rev=%d",rev);
}
