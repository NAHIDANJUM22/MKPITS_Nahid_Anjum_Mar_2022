#include<stdio.h>
#include<conio.h>
main()
{
	int res,a;
	printf("enter any negative no\n");
	scanf("%d",&a);
	if(a<0)
	{
		res=a*(-1);
	}
	printf("result=%d",res);
}
