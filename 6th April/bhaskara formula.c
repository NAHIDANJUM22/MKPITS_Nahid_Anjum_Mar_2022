#include<stdio.h>
#include<math.h>
int main()
{
 double p,q,a,b,c,x;
 printf("enter a,b,c\n");
 scanf("%lf%lf%lf",&a,&b,&c);
 
 x=(b*b)-(4*a*c);
 
 printf("%d",&x);
 
 x=sqrt(x);
 
 if(x>0)
 {
 	p=(-b+x)/(2*a);
 	q=(-b-x)/(2*a);
 	printf("roots are %lf%lf",p,q);
 }
 else
 {
 	printf("its not possible");
 }
	
	
}
