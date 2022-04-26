#include<stdio.h>
#include<conio.h>

main()
{
  int n,i,factor=0;
  printf("enter no \n");
  scanf("%d",&n);
  
  for(i=1;i<=200;i++)
  {
  	if(n%i==0)
  	{
  	 factor++;
	}
  }
  if(factor==2)
  {
  	printf("prime no");
  }
  else
  {
  	printf("not prime");
  }
}
