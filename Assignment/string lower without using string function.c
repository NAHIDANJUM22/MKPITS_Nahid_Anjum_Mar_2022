#include<stdio.h>
#include<conio.h>
main()
{
	char n[30];
	int i;
	printf("enter upper case string\n");
	scanf("%s",n);

	for(i=0;n[i]!='\0';i++)
	{
	if(n[i]>='A' && n[i]<='Z')
	{
		n[i]=n[i]+32;
	}

	    printf("lower string %s",n);
	}
}
