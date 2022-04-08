#include<stdio.h>
#include<conio.h>
main()
{
	float n1,n2,n3,p;
	printf("input the 1st no\n ");
	printf("input the 2nd no\n ");
	printf("input the 3rd no\n ");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	if(n1<(n2+n3) && n2<(n1+n3) && n3<(n1+n2))
	{
	  p=n1+n2+n3;
	  printf("perimeter=%f",p);	
	}
	else
	{
		printf("not possible to create a triangle");
	}
	
	
}
