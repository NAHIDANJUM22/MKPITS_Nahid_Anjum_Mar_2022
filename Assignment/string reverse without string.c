#include<stdio.h>
#include<conio.h>
main()
{
	char n[15];
	int i,count=0;
	printf("enter any name");
	scanf("%s",n);
	
	for(i=0;n[i]!='\0';i++)
	{
		count=count+1;
	}
		for(i=count-1;i>=0;i--)
	{
		printf("%c",n[i]);
	}

}
