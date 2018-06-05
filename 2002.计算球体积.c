#include <stdio.h>
#include <math.h>
#define PI 3.1415927
int main()
{
	double x;
	double V;
	
	while(scanf("%lf",&x)!=EOF)
	{
		V = (4.0*PI*pow(x,3))/3;
		printf("%.3lf\n",V);
	}
	return 0;
}
