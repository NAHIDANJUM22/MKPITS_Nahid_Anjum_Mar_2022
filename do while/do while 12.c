#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,rev=0;
	printf("enter no");
	scanf("%d",&num);
	do
	{
	m=num%10;
	num=num/10;
	rev=rev*10+m;
    }while(num!=0);
    printf("rev=%d",rev);
}
