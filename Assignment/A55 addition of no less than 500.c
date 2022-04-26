#include<stdio.h>
#include<conio.h>

main()
{
  int n,m,sum=0;;
  printf("enter no less than 500\n");
  scanf("%d",&n);
  
  if(n<1 || n>500)
  {
  	printf("wrong input\n");
  }
     while(n>0)
     {
     	m=n%10;
     	n=n/10;
     	sum=sum+m;
     }
    printf("addition of no is = %d ",sum);
}
