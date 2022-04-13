#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,r;
	a=0;
	b=1;
	printf("enter r\n");
	scanf("%d",&r);
	printf("%d\n%d\n",a,b);
	c=0;
	while(c<=r)
	{
		c=a+b;
		if(c<=r)
		{
			printf("%d",c);
		}
		a=b;
		b=c;
	}
}
