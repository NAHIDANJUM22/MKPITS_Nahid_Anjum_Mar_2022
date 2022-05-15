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
	  if(a[i]==5 && a[i+1]==5 || a[i]==5 && a[i+2]==5 )
	  {
	  	printf("true");
	  	f=1;
	  	break;
	  }
	}
	if(f==0)
	  {
	  	printf("false");
	  }
}
