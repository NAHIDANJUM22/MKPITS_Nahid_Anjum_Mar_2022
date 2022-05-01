#include<stdio.h>
#include<conio.h>
main()
{
	char n1[15],n2[15];
	int i,j;
	printf("enter 1st name\n");
	scanf("%s",n1);
	printf("enter 2nd name\n");
	scanf("%s",n2);
	
	for(i=0;n1[i]!='\0';i++)
	{
	for(j=0;n2[i]!='\0';j++,i++)
	{
		n1[i]=n2[j];
	}
        n1[i]='\0';
     printf("%s",n1);
    }
    
}
