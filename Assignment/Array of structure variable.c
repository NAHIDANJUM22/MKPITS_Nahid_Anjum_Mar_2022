#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	char name[15];
};
void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter student id\n");
		scanf("%d",&s[i].id);
		
		printf("enter student name\n");
		scanf("%s",s[i].name);
	}
	for(i=0;i<5;i++)
	{
		printf("student id=%d\n",s[i].id);
		printf("student name=%s\n",s[i].name);
	}
}

