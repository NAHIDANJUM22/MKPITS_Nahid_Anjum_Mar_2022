#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,choice,n;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}		
		printf("insert array element at bottom ");
	    scanf("%d",&choice);
	    
	    n++;
	    a[n-1]=choice;
	      printf("resultant array element");
	      for(i=0;i<n;i++)
	      {
		    printf("%d",a[i]);
	      }
}
