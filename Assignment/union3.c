#include<stdio.h>
#include<conio.h>
union student
{
	int id;
	char name[15];
};
void main()
{
	union student s[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("enter student id");
	scanf("%d",&s[i].id);
	printf("enter student name");
	scanf("%s",s[i].name);
	}
	for(i=0;i<5;i++)
	{
	printf("student id=%d",s[i].id);
	printf("student name=%s",s[i].name);
	}
}
