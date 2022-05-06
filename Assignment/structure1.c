#include<stdio.h>
#include<conio.h>

 struct student        //structure student name created
{
	int id;
	char name [15];
}s1;                  //created structure variable

 void main()
{
	printf("enter student id\n");
	scanf("%d",&s1.id);
	printf("enter student name\n");
	scanf("%s",s1.name);
	
	printf("studend id =%d\n",s1.id);
	printf("student name=%s",s1.name);
}
