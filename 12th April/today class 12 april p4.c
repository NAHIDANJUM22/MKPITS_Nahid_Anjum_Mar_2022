#include<stdio.h>
#include<conio.h>

main()
{
	int n,m,arm=0,num;
	
	printf("enter  no\n");
	scanf("%d",& n);
	num=n;
	while(n!=0)
	{
    	m=n%10;
		n=n/10;
		arm=arm+m*m*m;
	}
			
	if(arm==num)
	{
		printf("%d is armstrong number",num);
	}
	
	else
	{
		printf("%d is not armstrong number",num);
	}
}
