#include<stdio.h>
#include<conio.h>
void fun(float centi)
{
	float inch;
	
	inch=centi/2.54;
	
	printf("distance=%f",inch);
}
void main()
{
	float centi;
	printf("enter a distance in cm\n");
	scanf("%f",&centi);
	fun(centi);
}
