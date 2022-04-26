#include<stdio.h>
#include<conio.h>

main()
{
  int x,n,i,power=1;
  printf("enter x and n \n");
  scanf("%d%d",&x,&n);
  
  for(i=1;i<=n;i++)
  {
  	power=power*x;
  }
  printf("power of %d is %d",x,power);
}
