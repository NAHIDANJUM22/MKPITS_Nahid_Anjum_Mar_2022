#include<stdio.h>
#include<conio.h>

main()
{
	int n,m,rev=0,num;
	
	printf("enter  no\n");
	scanf("%d",& n);
	num=n;
	while(n!=0)
	{
    	m=n%10;
		n=n/10;
		rev=rev*10+m;
	}
			
	if(num==rev)
	{
		printf("%d is palindrom number",num);
	}
	
	else
	{
		printf("%d is not palindrom number",num);
	}
}
