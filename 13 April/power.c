#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,i,pow=1;
	printf("enter value of x and y\n");
	scanf("%d%d",&x,&y);
	i=1;
	while(i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("result=%d",pow);
}
