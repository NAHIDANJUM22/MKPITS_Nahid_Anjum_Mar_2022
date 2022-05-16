//        A
//      B   B
//    C   C   C
//  D   D   D   D
#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r='A';r<='D';r++)
	{
		for(c='D';c>=r;c--)
		{
			printf("  ");
		}
	for(c='A';c<=r;c++)
	{
		printf("%c   ",r);
	}
    printf("\n");
    }
}
