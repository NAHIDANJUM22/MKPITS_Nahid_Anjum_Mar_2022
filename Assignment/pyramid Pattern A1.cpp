#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,k;
	for(r=1;r<=4;r++)
	{
		for(c=5;c>r;c--)
		{
			printf(" ");
		}
	}
	for(k=1;k<=r;k++)
	{
		p("*");
	}
	printf("\n");
}
