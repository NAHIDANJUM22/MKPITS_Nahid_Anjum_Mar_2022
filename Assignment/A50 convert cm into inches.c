#include<stdio.h>
#include<conio.h>
main()
{
	float centi,inch;
	printf("enter a distance in cm\n");
	scanf("%f",&centi);
	
	inch=centi/2.54;
	
	printf("distance=%f",inch);
}
