//      1
//    2   2
//  3    3   3
//4   4    4   4

#include<stdio.h>
#include<conio.h>
main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=4;c>r;c--)
		{
			printf("  ");
		}
	for(c=1;c<=r;c++)
	{
		printf("%d   ",r);
	}
    printf("\n");
    }
}
