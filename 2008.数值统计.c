#include <stdio.h>
int main()
{
	float S[100];
	int n,i,x=0,y=0,z=0;
	
	while(scanf("%d",&n))
	{
		if(n==0)  break;
		for(i=0 ;i<n ;i++)
		    scanf("%f",&S[i]);
		for(i=0 ;i<n ;i++)
		{
			if(S[i]<0)  x++;
			if(S[i]==0)  y++;
			if(S[i]>0)  z++;
		}
		printf("%d %d %d\n",x,y,z);
		x = 0;
		y = 0;
		z = 0;
	}
	return 0;
}
