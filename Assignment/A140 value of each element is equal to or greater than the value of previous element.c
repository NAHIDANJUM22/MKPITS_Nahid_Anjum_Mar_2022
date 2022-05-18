#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,f=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i ] < a[i+1]) 
        {
            f=1;
        }
    }
    
    if(f==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
