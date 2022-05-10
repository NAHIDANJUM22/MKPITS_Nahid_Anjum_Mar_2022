#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[2],p=0;
	for(i=0;i<2;i++)
	{
     printf("enter array element\n");
     scanf("%d",&a[i]);
	}

	for(i=0;i<2;i++)
	{
		if(a[i]==15 || a[i]==20)
		{
			printf("false");
			p=1;
			break;
		}
	}
		if(p==0)
		{
		    printf("true");	
		}
}
