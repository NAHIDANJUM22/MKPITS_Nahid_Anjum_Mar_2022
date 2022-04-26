#include<stdio.h>
#include<conio.h>
main()
{
	float p,q,r,s,diff;
	float max,min;
	printf("enter any 4 numbers \n");
	scanf("%f%f%f%f",&p,&q,&r,&s);
	
	if(p>=q && p>=r && p>=s)
	{
		max=p;
	}
	else if(q>=p && q>=r && q>=s)
	{
		max=q;
	}
	else if(r>=p && r>=q && r>=s)
	{
		max=r;
	}
	else
	{
		max=s;
	}
	
	if(p<=q && p<=r && p<=r)
	{
		min=p;
	}
	else if(q<=p && q<=r && q<=s)
	{
		min=q;
	}
	else if(r<=p && r<=q && r<=s)
	{
		min=r;
	}
	else
	{
		min=s;
	}
	
	printf("difference of min & max is =%.2f",max-min);
}
	
