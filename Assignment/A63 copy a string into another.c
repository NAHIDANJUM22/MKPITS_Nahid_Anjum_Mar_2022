#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[25],b[25];
	int len;
	printf("enter any string\n");
	scanf("%s",a);
	strcpy(b,a);
	len=strlen(a);
	printf("\ncopied string\n%s \ncopied string length\n%d",b,len);
}
