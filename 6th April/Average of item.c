#include<stdio.h>
#include<conio.h>

main()
{

	float p1,p2,w1,w2,avg;
	printf("enter value of items \n");
	scanf("%f%f",&p1,&p2);
	printf("enter value of weights \n");
	scanf("%f%f",&w1,&w2);
	
	avg=(p1*w1 + p2*w2)/(p1+p2);
	
	printf("the avg value of item=%f",avg);
		
}
