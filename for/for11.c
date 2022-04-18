#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,rev=0,bak;
	printf("enter no");
	scanf("%d",&num);
	bak=num;
	for(;num!=0;)
	{
	m=num%10;
	num=num/10;
	rev=rev*10+m;
    }
    if(bak==rev)
    {
    	 printf("no is pallindrome %d",bak);
	}
    else
    {
    	 printf("no is not pallindrome %d",bak);
	}
}
