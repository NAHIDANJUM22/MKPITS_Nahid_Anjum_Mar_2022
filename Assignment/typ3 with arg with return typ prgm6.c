#include<stdio.h>
#include<conio.h>
int fun(int a,int b)
{
	int sum=0,i;
	i=a;
	while(i<=b)
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
	int n1,n2;
	int x;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	x=fun(n1,n2);
	printf("%d",x);
}
