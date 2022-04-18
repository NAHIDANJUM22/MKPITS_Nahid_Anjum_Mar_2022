#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,i,pow=1;
	printf("enter x and y");
	scanf("%d%d",&x,&y);
	i=1;
	do
	{
		pow=pow*x;
		i++;
		
	}while(i<=y);
	printf("power=%d",pow);
	
}
