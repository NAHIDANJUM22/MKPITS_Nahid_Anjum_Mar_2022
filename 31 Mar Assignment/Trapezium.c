#include<stdio.h>
#include<conio.h>

main()
{
	int side1,side2,height,area;
	
	printf("enter the value of side1,side2 and height");
	scanf("%d %d %d",&side1,&side2,&height);
	
	area=0.5*(side1+side2)*height;
	
	printf("the area of trapezium=%d",area);
}
