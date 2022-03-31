#include<stdio.h>
#include<conio.h>

main()
{
	int length,breadth,height,perimeter;
	
	printf("enter the value of length,breadth and height");
	scanf("%d %d %d",&length,&breadth,&height);
	
	perimeter=4*(length+breadth+height);
	
	printf("the perimeter of cuboid =%d",perimeter);
	
	
}
