#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[5],f=0;     //flag principle
    printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
	  scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
	  if(a[i]==5 && a[i+2]==3 )
	   {
	    f=1;
	   }
	}
	if(f==1)
	  {
	  	printf("true");
	  }
	else
	{
		printf("false");
	}
}
