#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=5;c>=r;c--)
		{
			printf("*");
		}
		printf("\n");
	}
}
