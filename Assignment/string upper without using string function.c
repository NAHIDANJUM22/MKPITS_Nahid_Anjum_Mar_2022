#include<stdio.h>
#include<conio.h>
main()
{
	char n[30];
	int i;
	printf("enter lower case string\n");
	scanf("%s",n);

	for(i=0;n[i]!='\0';i++)
	{
	if(n[i]>='a' && n[i]<='z')
	{
		n[i]=n[i]-32;
	}

	    printf("upper string %s",n);
	}
}
