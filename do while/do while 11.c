#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,rev=0,bak;
	printf("enter no");
	scanf("%d",&num);
	bak=num;
	do
	{
	m=num%10;
	num=num/10;
	rev=rev*10+m;
    }while(num!=0);
    if(bak==rev)
    {
    	 printf("no is pallindrome %d",bak);
	}
    else
    {
    	 printf("no is not pallindrome %d",bak);
	}
}
