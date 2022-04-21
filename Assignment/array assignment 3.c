#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,even=0,odd=0;
	printf("enter 10 element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<10;i++)
	{
	 if(a[i]%2==0)
	 {
	 	even++;
	 }
	 else
	 {
	 	odd++;
	 }
	}
	printf("total even= %d total odd= %d",even,odd);
}
