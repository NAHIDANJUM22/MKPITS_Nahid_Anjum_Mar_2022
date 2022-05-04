#include<stdio.h>
#include<conio.h>
int i=1;  //global variable
void fun();
void main()
{
	fun();
}
void fun()
{
	//static int i=1;
	if(i==10)
	return;
	printf("%d",i);
	i++;
	fun();
}
