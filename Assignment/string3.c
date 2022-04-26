#include<stdio.h>
#include<conio.h>
main()
{
	char name[10];
	int i;
	printf("enter any name\n");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}
