#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
	
	if(c>='A' && c<='Z')
	{
		printf("character is a capital letter");
	}
	else
	if(c>='a' && c<='z')
	{
		printf("character is a small letter");
	}
	else
	if(c>='0' && c<='9')
	{
        printf("character is a digit");
	}
	else
	{
		printf("character is a special symbol");
	}
	
}
