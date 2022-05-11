#include<stdio.h>
#include<conio.h>
main()
{
	int a[3],b[3],i,sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		printf("enter 1st array element\n");
	    scanf("%d",&a[i]);
	}
		
	sum1=a[i]+a[i+1]+a[i+2];
		for(i=0;i<3;i++)
	{
		sum1=sum1+a[i];
	}
	    
	for(i=0;i<3;i++)
	{
		printf("enter 2nd array element\n");
	    scanf("%d",&b[i]);
    }
	    
	sum2=b[i]+b[i+1]+b[i+2];
	for(i=0;i<3;i++)
	{
		sum2=sum2+b[i];
	}
	    
	    if(sum1>sum2)
	     {
 		    printf("%d",sum1);
	     }
	    else
	    {
		   printf("%d",sum2);
	    }
    
}
