#include <stdio.h>
#include <math.h>
int main()
{
	int T,n,i;
	double sum=0,term;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=1 ;i<=n ;i++)
	    {
	    	term = 1.0/i*pow(-1,i+1);
	    	sum = sum+term;
		}
		printf("%.2lf\n",sum);
		sum = 0;
	}
	return 0;
}
