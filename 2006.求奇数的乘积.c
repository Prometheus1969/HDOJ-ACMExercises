#include <stdio.h>
int main()
{
	int i,n,S[1000];
	long long int jc=1;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		for(i=0 ;i<n ;i++)
		    if(S[i]%2==1)
		        jc = jc*S[i];
		printf("%lld\n",jc);
		jc = 1;
	}
	return 0;
}
