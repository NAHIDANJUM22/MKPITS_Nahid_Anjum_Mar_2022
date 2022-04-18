#include<stdio.h>
#include<conio.h>
main()
{
	int num,m,arm=0,bak;
	printf("enter no");
	scanf("%d",&num);
	bak=num;
	do
	{
	m=num%10;
	num=num/10;
	arm=arm+m*m*m;
    }while(num!=0);
    if(bak==arm)
    {
    	 printf("no is armstrong no %d",arm);
	}
    else
    {
    	 printf("no is not armstrong no %d",arm);
	}
}
