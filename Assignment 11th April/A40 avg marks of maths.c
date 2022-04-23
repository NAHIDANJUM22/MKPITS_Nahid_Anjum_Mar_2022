#include<stdio.h>
#include<conio.h>
main()
{
	int i,x,sum=0,num,avg;
	printf("enter no of student\n");
	scanf("%d",&x);
	i=1;
	while(i<=x)
	{
		
		printf("enter marks of %d student",i);
		i++;
		
		scanf("%d",&num);
		sum=sum+num;
	}
	  avg=sum/x;
	  printf("avg marks obtaited in mathematics=%d",avg);
}
