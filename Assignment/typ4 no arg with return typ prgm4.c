#include<stdio.h>
#include<conio.h>
float fun()
{
	float centi,inch;
	printf("enter a distance in cm\n");
	scanf("%f",&centi);
	
	inch=centi/2.54;
	
	return inch;
}
void main()
{
    float s;
	s=fun();
	printf("%f",s);
}
