//        A
//      C   C
//    E   E   E
//  G   G   G   G
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
	ch=ch+2;
    printf("\n");
    }
}
