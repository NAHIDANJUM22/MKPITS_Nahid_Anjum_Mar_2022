#include<stdio.h>
#include<conio.h>
main()
{
	int num,sum=0,count=0,max,min;
	float avg;
	printf("enter number");
	scanf("%d",&num);
	if(num>0)
	{
		min=num;
		max=num;
	
	for(;num>0;)
	{
		count=count+1;
		if(min>num)
		min=num;
		if(max<num)
		max=num;
		sum=sum+num;
	printf("enter number");
	scanf("%d",&num);
    }
	
	avg=sum/count;
	printf("entered no of values=%d\n minimum value=%d\n maximum valu=%d\n avg of values=%f",count,min,max,avg);
}
else
{
	printf("invalid input");
}
}
	

	
	
	

