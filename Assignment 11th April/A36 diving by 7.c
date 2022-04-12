#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,i;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	printf("the no which gives remainder as 2 or 3 when divide it by 7 are\n");
	i=n1;
	while(i<=n2)
	{
		if(i%7==2 || i%7==3 )
		{
			printf("%d\n",i);
			
		}
		i++;
	}
}
