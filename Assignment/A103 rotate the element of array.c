#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[4],b[4];
	for(i=0;i<4;i++)
	{
     printf("enter array element\n");
     scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
     if(i==3)
	{
		b[0]=a[i];
	}
    else 
	{
		b[i+1]=a[i];
	}
}
	for(i=0;i<4;i++)
	{
     printf("%d",b[i]);
	}

}
