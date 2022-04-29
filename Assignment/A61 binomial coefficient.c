#include<stdio.h>
#include<conio.h>

main()
{
	int n,r,n_fact=1,nr_fact=1,coefficient,i,j;
	for(n=0;n<=10;n++)
	{
		for(r=0;r<=n;r++)
		{
			for(i=n;i>r;i--)
			{
				n_fact=n_fact*i;
		    }
			for(j=n-r;j>=1;j--)
			{
				nr_fact=nr_fact*j;
			}
			coefficient=n_fact/nr_fact;
			printf("%d",coefficient);
			if(n==r)
			printf("\n");
			n_fact=1;
			nr_fact=1;
		}
	}
}


