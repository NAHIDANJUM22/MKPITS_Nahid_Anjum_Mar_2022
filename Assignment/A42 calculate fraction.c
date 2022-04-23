#include<stdio.h>
#include<conio.h>
main()
{
	float s=0,j=1,a,i;
	printf("value of s \n where s=1+3/2+5/4+7/8");
	for(i=0;i<=7;i+2)
	{
	 a=i/j;
	 s=s+a;
	 j=j*2;
	}
	printf("value of s %f",s);
}
	
