#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,x=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
       if(a[i]==5)
    	{
    	    break;
    	}
        b[i]=a[i];
        x=x+1;
    }
    
    printf("New Array is : \n");
    for (i=0;i<x;i++)
    {
    	printf("%d\n",b[i]);
	}
}
