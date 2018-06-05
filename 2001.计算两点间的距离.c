#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2;
    double juli;
    
    while(scanf("%lf",&x1)!=EOF)
    {
    	scanf("%lf %lf %lf",&y1,&x2,&y2);
    	juli = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    	printf("%.2lf\n",juli);
	}
	return 0;
}
