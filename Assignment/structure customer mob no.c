#include<stdio.h>
#include<conio.h>
struct customer
{
	int id;
	char name[20],mobno[10];
};
void main()
{
	struct customer c[5];
	int i,j,l1,l2;
	for(i=0;i<5;i++)
	{
		printf("enter customer id\n");
		scanf("%d",&c[i].id);
		printf("enter customer name\n");
		scanf("%s",c[i].name);
		printf("enter mobile no\n");
		scanf("%s",c[i].mobno);
	}
	for(j=0;j<5;j++)
	{
		l1=c[j].mobno[8];
		l2=c[j].mobno[9];
	if(l1=='8'&& l2=='8')
	{
		printf("customer id=%d\n",c[j].id);
		printf("customer name=%s\n",c[j].name);
		printf("enter mobile no=%s\n",c[j].mobno);
	}
    }
}
	

