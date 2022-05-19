//         A
//       A B C
//     A B C D E
//   A B C D E F G
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,sp,ch='A';
	for(i=1;i<=4;i++)
	{
	  for(sp=1;sp<=41-i;sp++)
	  {
	  	printf("  ");
	  }
	  for(j=1;j<=i;j++)
	  {
	  	printf("%c ",ch);
	  	ch++;
	  }
	  for(j=1;j<i;j++)
	  {
	  	printf("%c ",ch);
	  	ch++;
	  }
	  ch='A';
	  printf("\n");
    }
}
	  
