#include<stdio.h>
#include<conio.h>
float fun(float centi)
{
	float inch;
	
	inch=centi/2.54;
	
	return inch;
}
void main()
{
	float centi;
	float s;
	printf("enter a distance in cm\n");
	scanf("%f",&centi);
	s=fun(centi);
	printf("%f",s);
}
