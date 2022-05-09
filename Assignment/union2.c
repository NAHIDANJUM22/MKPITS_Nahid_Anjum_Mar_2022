#include<stdio.h>
#include<conio.h>
union student
{
	int id;
	char name[15];
};
void main()
{
	union student s1;
	printf("enter student id");
	scanf("%d",&s1.id);
	printf("enter student name");
	scanf("%s",s1.name);
	
	printf("student id=%d",s1.id);
	printf("student name=%s",s1.name);
}
