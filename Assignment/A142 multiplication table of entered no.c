#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,p;
	printf("enter number");
	scanf("%d",&n);
	printf("multiplication of %d is\n",n);
	
    for(i=1;i<=10;i++)
	{
		p=n*i;
		printf("%d\n",p);
	}
}
