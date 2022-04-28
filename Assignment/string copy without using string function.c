#include<stdio.h>
#include<conio.h>
main()
{
	char n1[15],n2[15];
	int i;
	printf("enter any name\n");
	scanf("%s",n1);
	
	for(i=0;n1[i]!='\0';i++)
	{
		n2[i]=n1[i];
	}
	
	printf("%s",n2);
	printf("length of string =%d\n",i);
	
}
