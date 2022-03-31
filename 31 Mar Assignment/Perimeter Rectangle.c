#include<stdio.h>
#include<conio.h>

main()
{
	int length,width,perimeter;
	
	printf("enter the value of length and width");
	scanf("%d %d",&length,&width);
	
	perimeter=2*(length+width);
	
	printf("the perimeter of rectangle=%d",perimeter);
}
