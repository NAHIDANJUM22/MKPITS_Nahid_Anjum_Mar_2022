#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[4],sum=0;     
    printf("enter the array element\n");
	for(i=0;i<4;i++)
	{
	  scanf("%d",&a[i]);
	}
		for(i=0;i<4;i++)
	{
	  if(a[i]==5) 
	   {
	    sum=sum+5;
	   }
	}
	printf("sum of given array %d",sum);
}
