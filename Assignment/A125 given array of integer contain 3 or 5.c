#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[5],f=0;     
    printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
	  scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
	  if(a[i]==3 || a[i]==5)
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
