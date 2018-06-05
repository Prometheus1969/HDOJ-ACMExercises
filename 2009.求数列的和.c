#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,i;
	double sum,term;
	
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		term = n;
		sum = n;
		for(i=2 ;i<=m ;i++)
		{
			term = pow(term,0.5);
			sum = sum+term;
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
