#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,sum=0;
	printf("enter no");
	scanf("%d",&num);
	for(;num>0;)
	{
	m=num%10;
	num=num/10;
	sum=sum+m;
    }
    printf("sum=%d",sum);
}
