#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,sum=0,i;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	
	for(i=n1;i<=n2;i++)
	{
		if(i%17!=0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
		
	}
	printf("addition of all no not divisible by 17 between %d and %d=%d",n1,n2,sum);
}
