#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,k;
	for(r=1;r<=4;r++)        //rows
	{
		for(c=5;c>r;c--)    //left side space
		{
		  printf(" ");	
		}
		for(k=1;k<=r;k++)   //*,middle & right side space
		{
		  printf("* ");	
		}
		printf("\n");
	}
}
