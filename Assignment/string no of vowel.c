#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char name[40];
	int i,vowel=0;
	printf("enter any name");
	scanf("%s",name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
	    {
	    	vowel=vowel+1;
		}
	}
		printf("vowel =%d",vowel);
		

}
