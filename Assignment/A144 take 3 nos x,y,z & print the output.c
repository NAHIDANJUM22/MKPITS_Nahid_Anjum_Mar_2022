#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,result1,result2;
	
	printf("enter 1st number\n");
	scanf("%d",&x);
	printf("enter 2nd number\n");
	scanf("%d",&y);
	printf("enter 3rd number\n");
	scanf("%d",&z);
	result1=(x+y)*z;
	result2=(x*y)+(y*z);
    printf("\nresult1=%d  \nresult2=%d",result1,result2);
}
