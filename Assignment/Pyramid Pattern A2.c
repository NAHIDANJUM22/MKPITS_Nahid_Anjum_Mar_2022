//      1
//    2   2
//  3    3   3
//4   4    4   4

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,sp;
	for(i=1;i<=4;i++)
	{
		for(sp=1;sp<=41-i;sp++)
		{
			printf("  ");
		}
	for(j=1;j<=i;j++)
	{
		printf(" %d ",i);
	}
     printf("\n");
    }
}
