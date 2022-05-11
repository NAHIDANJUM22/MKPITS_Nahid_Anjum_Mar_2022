#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r='A';r<='C';r++)
	{
		for(c='C';c>r;c--)
		{
			printf("  ");
		}
	for(c='A';c<=r;c++)
	{
		printf("%c ",r);
	}
		printf("\n");
	}
}
