#include<stdio.h>
#include<conio.h>
main()
{
	float y[5];
	int x,a=0,b=0;
	printf("enter 1st no\n");
	scanf("%f",&y[0]);
	printf("enter 2nd no\n");
	scanf("%f",&y[1]);
	printf("enter 3rd no\n");
	scanf("%f",&y[2]);
	printf("enter 4th no\n");
	scanf("%f",&y[3]);
	printf("enter 5th no\n");
	scanf("%f",&y[4]);
	
	for(x=0;x<5;x++)
	{
		if(x>0)
		{
		  a++;
		}
		else
		{
			b++;
		}
    }  
    printf("no of positive no %d\n",a);
    printf("no of negative no %d\n",b);
	
}
