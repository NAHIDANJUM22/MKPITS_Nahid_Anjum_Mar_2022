//      1
//    3   3
//  5   5   5
//7   7   7   7
#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,add=1;
	for(r=1;r<=4;r++)
	{
		for(c=4;c>=r;c--)
		{
			printf(" ");
		}
	for(c=1;c<=r;c++)
	{
	   printf("%d ",add);
	}
	add=add+2;
    printf("\n");
    }
}
