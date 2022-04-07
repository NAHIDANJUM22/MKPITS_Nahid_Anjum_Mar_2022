#include<stdio.h>
#include<conio.h>

main()
{
  int num,d1,d2,d3,d4,d5,even=0,odd=0;
  printf("enter the 5 digit no\n");
  scanf("%d",&num);
  
  d1=num%10;
  num=num/10;
  
  d2=num%10;
  num=num/10;
  
   d3=num%10;
  num=num/10;
  
   d4=num%10;
  num=num/10;
  
   d5=num%10;
  
  
  if(d1%2==0)
  {
    even=even+d1;
  }
  else
  {   
  	odd=odd+d1;
  }
   if(d2%2==0)
  {
    even=even+d2;
  }
  else
  {   
  	odd=odd+d2;
  }
   if(d3%2==0)
  {
    even=even+d3;
  }
  else
  {   
  	odd=odd+d3;
  }
   if(d4%2==0)
  {
    even=even+d4;
  }
  else
  {   
  	odd=odd+d4;
  }
   if(d5%2==0)
  {
    even=even+d5;
  }
  else
  {   
  	odd=odd+d5;
  }
  
  printf("%d sum of even digit number \n",even);
  printf("%d sum of odd digit number \n",odd);
  	
}
