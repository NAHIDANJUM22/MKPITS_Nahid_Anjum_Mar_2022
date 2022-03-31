#include<stdio.h>
#include<conio.h>

main()

{
	int side1,side2,perimeter;
	
	printf("enter the value of side1 and side2");
	scanf("%d %d",&side1,&side2);
	
	perimeter=2*(side1+side2);
	
	printf("the perimeter of parallelogram =%d",perimeter);
}
