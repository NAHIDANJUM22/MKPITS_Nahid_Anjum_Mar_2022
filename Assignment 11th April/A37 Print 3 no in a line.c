#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,j=1,x=0;
	printf("enter no of lines\n");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		i++;
		while(x<3)
		{
			printf("%d",j++);
			x++;
		}
		x=0;
		printf("\n");
	}
}
