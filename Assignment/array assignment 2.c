#include<stdio.h>
#include<conio.h>
main()
{
	int a[4],i;
	printf("enter 5 element\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<=4;i++)
		{
				if(a[i]%4==0)
		{
			printf("no divisible by 4 is %d\n",a[i]);
		}
		
        }
}
	

	

