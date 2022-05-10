#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[3],p=0,q=0;
	for(i=0;i<3;i++)
	{
     printf("enter array element\n");
     scanf("%d",&a[i]);
	}

	for(i=0;i<3;i++)
	{
		if(a[i]==10)
		{
		 p=p+1;
		}
		if(a[i]==20)
		{
		 q=q+1;
		}
	}
		if(p==2 || q==2)
		{
		    printf("true");	
		}
		else
		{
			printf("false");
		}
}
