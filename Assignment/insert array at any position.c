#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,choice,n,pos;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}		
		printf("insert position that you want to insert ");
	    scanf("%d",&pos);
	    printf("insert choice that you want to insert ");
	    scanf("%d",&choice);
	    for(i=n;i>=pos;i--)
	      {
		    a[i]=a[i-1];
	      }
	      a[pos]=choice;
	      n++;
	      for(i=0;i<n;i++)
	      {
	      	printf("%d",a[i]);
		  }
}
