//           1
//         1 0 1
//       2 1 0 1 2
//     3 2 1 0 1 2 3

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n=0,sp;
	for(i=1;i<=4;i++)
	{
		for(sp=1;sp<=41-i;sp++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n--;
		}
		n=1;
		for(j=1;j<i;j++)
		{
			printf("%d ",n);
			n++;
		}
		n=j;
		printf("\n");
	}
	
}
