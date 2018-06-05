#include <stdio.h>
#include <math.h>
int main()
{
	double X,Y;
	
	while(scanf("%lf",&X)!=EOF)
	{
		Y = fabs(X);
		printf("%.2lf\n",Y);
	}
	return 0;
}
