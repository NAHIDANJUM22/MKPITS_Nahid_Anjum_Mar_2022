#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z;
	printf("enter x,y and z\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x-y>=20 || x-z>=20 || y-z>=20)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
