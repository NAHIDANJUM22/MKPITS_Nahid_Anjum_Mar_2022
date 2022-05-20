#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,n3,n4;
	float avg;
	printf("enter 1st number\n");
	scanf("%d",&n1);
	printf("enter 2nd number\n");
	scanf("%d",&n2);
	printf("enter 3rd number\n");
	scanf("%d",&n3);
	printf("enter 4th number\n");
	scanf("%d",&n4);

	avg=(n1+n2+n3+n4)/4;
	printf("average of number is = %.2f\n",avg);
	
}
