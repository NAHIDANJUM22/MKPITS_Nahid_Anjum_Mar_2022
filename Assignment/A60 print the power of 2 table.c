#include<stdio.h>
#include<conio.h>
void main() 
{
    int a,n;
    float b;
    a=1;
    for(n=0; n<11; n++) 
    {
      if (n == 0)
      {
        a = 1;
      }
      else
      {
        a = a * 2;
        b = 1.0 /a;
      }
      printf("\n %d   %d  %f", n, a, b);
    }

  }
