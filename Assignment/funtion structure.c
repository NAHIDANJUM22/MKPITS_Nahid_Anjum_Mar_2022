#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
};
struct student dis()
{
	struct student s;
	printf("enter student id\n");
	scanf("%d",s.id);
	printf("enter student name\n");
	scanf("%s",s.name);
	
	return s;
}
void main()
{
	struct student s;
	s=dis();
	printf("student id=%d",s.id);
	printf("student name=%s",s.name);
}
