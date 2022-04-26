#include<stdio.h>
#include<conio.h>
main()
{
	float s=0,j=1,i;
	printf("value of s \n where s=1+3/2+5/4+7/8");
	for(i=0;i<=7;i+2)
	{
	 s=s+i/j;
	 
	 i=i+2;
	 j=j*2;
	}
	printf("value of s %f\n",s);
}
	
