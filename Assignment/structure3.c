#include<stdio.h>
#include<conio.h>

 struct student        //structure student name created
{
	int id;
	char name [15];
} ;                 
void main()
{
	struct student s1={5,"ramesh"};     // structure constant
	printf("studend id =%d\n",s1.id);
	printf("student name=%s",s1.name);
}
