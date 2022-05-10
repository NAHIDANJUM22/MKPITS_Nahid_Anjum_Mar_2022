#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	printf("enter x,y and z\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(y>x && z>y)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
