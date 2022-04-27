#include<stdio.h>
#include<string.h>
main()
{
	char name[15],a[15],rev=0,s;
	printf("enter any name\n");
	scanf("%s",name);
	
	//taking backup of name
	strcpy(a,name);
	//reversing string by using strrev
	strrev(name);
	//comparing revese string to origigal string
	s=strcmp(a,name);
	if(s==0)
	{
		printf("%s pallindrome",a);
	}
	else
	{
		printf("%s not pallindrome",a);
	}
	
	
	
}
