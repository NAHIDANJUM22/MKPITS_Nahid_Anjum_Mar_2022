//          A
//        A B A
//      A B C B A
//    A B C D C B A

#include<stdio.h>
#include<conio.h>
main()
{
    int i, j, sp, n='A';
    
    for(i=1; i<=4; i++)
    {
        for(sp=1; sp<=41-i; sp++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ",n);
            n++;
        }
        n=n-2;
        for(j=1; j<i; j++)
        {
        	printf("%c ",n);
        	n--;
        }
        n='A';
        printf("\n");
    }
}
