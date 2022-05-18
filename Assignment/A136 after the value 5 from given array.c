#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array element : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("New Array is : \n");
    for (i=0;i<n;i++)
    {
       if(a[i]==5)
    	{
    	    for(x=i+1;x<n;x++)
    	    {
    	        printf("%d \n",a[x]);
    	    }
    	    break;
    	}
    }
}
