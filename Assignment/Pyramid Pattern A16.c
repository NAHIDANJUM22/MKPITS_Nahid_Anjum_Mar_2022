//   7 7 7 7 7 7 7
//     5 5 5 5 5   
//       3 3 3
//         1
#include<stdio.h>
#include<conio.h>
void main()
{
        int i,j,sp,n=7;
        for(i=4;i>=1;i--)
        {
            for(sp=1;sp<=41-i;sp++)
            {
                printf(" ");
            }
            for(j=4;j>=1;j--)
            {
                if(j<=i)
                {
                  printf("%d ",n);
				}
				else
				{
					printf(" ");
				}
            }
            for(j=1;j<=4;j++)
            {
                   if(j<i)
                {
                  printf("%d ",n);
				}
			}
			n=n-2;
			printf("\n");
        }
}
