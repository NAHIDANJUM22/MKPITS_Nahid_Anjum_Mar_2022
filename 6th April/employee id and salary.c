#include<stdio.h>
#include<conio.h>

main()
{
	int id,hour;
	float salary,amount;
	
	printf("enter employee id\n");
	printf("enter working hours \n");
	printf("salary amount per hour \n");
	scanf("%d%d%f",&id,&hour,&amount);
	
	salary=hour*amount;
	
	
	printf("employee id =%d \n",id);
	printf("salary=%f",salary);
	
		
}

