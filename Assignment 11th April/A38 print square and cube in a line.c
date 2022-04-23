#include<stdio.h>
#include<conio.h>
main()
{
	int a,i;
	printf("enter no of lines\n");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		i++;
        printf("%d%d%d\n",i,i*i,i*i*i);
	}
}
