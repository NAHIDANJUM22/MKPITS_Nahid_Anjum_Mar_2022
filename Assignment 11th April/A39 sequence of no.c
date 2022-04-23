#include<stdio.h>
#include<conio.h>
main()
{
	int p,q,x,y,k;
	printf("enter no of column\n");
	scanf("%d",&p);
	printf("enter no of row\n");
	scanf("%d",&q);
	x=1;
	k=1;
	while(x<=p)
	{
		x++;
	
	    y=1;
	    while(y<=q)
	  {
	  	y++;
	  	printf("%d",k);
	  	k++;
	  }
	  printf("\n");
    }
}
