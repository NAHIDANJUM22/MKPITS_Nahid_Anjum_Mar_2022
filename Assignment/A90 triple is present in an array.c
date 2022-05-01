#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,f=0;
	printf("enter 5 no in an array\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		int j=a[i];
		if(a[i]==j && a[i+1]==j && a[i+2]==j)
	     {
		    printf("triple");
		    f=1;
		}
    }
    if(f==0)
    {
    	printf("not triple");
	}
}
