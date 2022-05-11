#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r='A';r<='E';r++)
	{
		for(c='E';c>=r;c--)
		{
			printf("%c",r);
		}
		printf("\n");
	}
}
