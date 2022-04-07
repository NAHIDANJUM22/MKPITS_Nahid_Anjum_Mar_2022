#include<stdio.h>
#include<conio.h>

main()
{
	int p,q,r,s,res;
	printf("enter the values\n");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	
	if(q>r) 
	{
		printf("correct values");
	
	}
	else
	if(s>p) 
	{
		printf("correct values");
		
		
	}
	else
	if(r+s > p+q) 
	{
	    
		printf("correct values");
			
	}
	else
    {

	printf("wrong values");
	
    }
}



