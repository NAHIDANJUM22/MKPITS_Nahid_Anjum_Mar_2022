#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,sum=0;
	printf("enter no");
	scanf("%d",&num);
	do
	{
	m=num%10;
	num=num/10;
	sum=sum+m;
    }while(num!=0);
    printf("sum=%d",sum);
}
