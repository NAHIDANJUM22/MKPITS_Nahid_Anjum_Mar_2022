//        A
//      B   B
//    C   C   C
//  D   D   D   D
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,ch='A',sp;
	for(i=1;i<=4;i++)
	{
		for(sp=1;sp<=41-i;sp++)
		{
			printf("  ");
		}
	for(j=1;j<=i;j++)
	{
		printf(" %c ",ch);
	}
	ch++;
    printf("\n");
    }
}
