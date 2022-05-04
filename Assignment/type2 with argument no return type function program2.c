#include<stdio.h>
#include<conio.h>
void fun(int a,int b)
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
	printf("addition of all no not divisible by 17 between %d and %d=%d",a,b,sum);
}
void main()
{
	int n1,n2;
	printf("enter 1st no");
	scanf("%d",&n1);
	printf("enter 2nd no");
	scanf("%d",&n2);
	fun(n1,n2);
}
