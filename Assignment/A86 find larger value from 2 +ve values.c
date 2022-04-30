#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2;
	printf("enter two nos\n");
	scanf("%d%d",&num1,&num2);
	
	if(num1>=20 && num1<=30 || num2>=20 && num2<=30)
	{
		printf("the given no is in the range\n");
		
		if(num1>num2)
		{
			printf("1st no is larger\n");
		}
		else
	    {
		printf("2nd no is larger\n");
	    }
    }
	else
	{
		printf("\n%d\n",0);
	}	
}
