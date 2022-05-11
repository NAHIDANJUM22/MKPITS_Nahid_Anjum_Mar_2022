#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r=1;r<=3;r++)
	{
		for(c=3;c>r;c--)
		{
			printf("  ");
		}
	for(c=1;c<=r;c++)
	{
		printf("%d ",c);
	}
		printf("\n");
	}
}
