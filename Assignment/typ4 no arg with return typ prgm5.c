#include<stdio.h>
#include<conio.h>
int fun()
{
	int sum=0,i;
	int n1,n2;
	
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	i=n1;
	while(i<=n2)
	{
		if(i%17!=0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
		i++;
	}
    return sum;
}
void main()
{
	int x;
	x=fun();
	printf("%d",x);
}
