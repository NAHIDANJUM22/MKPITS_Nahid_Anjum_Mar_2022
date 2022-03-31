#include<stdio.h>
#include<conio.h>

main()
{
	int diag1,diag2,area;
	
	printf("enter the value of diagonal1 and diagonal2");
	scanf("%d %d",&diag1,&diag2);
	
	area=0.5*diag1*diag2;
	
	printf("the area of rhombus=%d",area);
}
