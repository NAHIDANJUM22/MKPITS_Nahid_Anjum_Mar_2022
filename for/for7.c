#include<stdio.h>
#include<conio.h>
main()
{
	int i,x,y,pow=1;
	printf("enter x and y");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		pow=pow*x;
			
	}
	printf("power=%d",pow);
	
}
