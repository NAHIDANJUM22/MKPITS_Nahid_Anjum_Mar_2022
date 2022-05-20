#include<stdio.h>
#include<conio.h>
main()
{
	double temp,k=273.15,f=32;
	printf("Enter temperature in celcius\n");
	scanf("%lf",&temp);
	
	k=k+temp;
	printf("temperature in kelvin\n %lf\n",k);
	
	f=f+(temp*1.8);
	printf("temperature in fahrenheit\n %lf\n",f);
}
