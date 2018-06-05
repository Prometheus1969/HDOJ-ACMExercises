#include <stdio.h>
#include <math.h>
int main()
{
	int m,max,min,n,i;
    int x=0,y=0;
    
    while(scanf("%d %d",&max,&min)!=EOF)
    {
    	m = (max<min)?max:min;
    	n = (max<min)?min:max;
    	for(i=m ;i<=n ;i++)
    	{
    		if(i%2==0)
    		    x = x+pow(i,2);
    		if(i%2==1)
    		    y = y+pow(i,3);
		}
		printf("%d %d\n",x,y);
		x = 0;
		y = 0;
	}
	return 0;
}
