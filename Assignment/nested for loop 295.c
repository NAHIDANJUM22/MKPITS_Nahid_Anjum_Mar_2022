#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r='E';r>='A';r--)
	{
		for(c='A';c<=r;c++)
		{
			printf("%c",r);
		}
		printf("\n");
	}
}
