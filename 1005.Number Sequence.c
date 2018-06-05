/*
#include <stdio.h>
int main()
{
	int a,b;
	int n,i;
	int f1,f2,f3;
	while(scanf("%d %d %d",&a,&b,&n)!=EOF)
	{
		if(a==0&&b==0&&n==0)  break;
		f1 = 1;
		f2 = 1;
		for(i=3 ;i<=n ;i++)
		{
			f3 = (a*f2+b*f1)%7;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n",f3);
	}
	return 0;
}
*/
#include<stdio.h>  
int main()  
{  
    int a,b,n,i,arr[49]={1,1};  
    while(scanf("%d%d%d",&a,&b,&n)&&(a|b|n))  
    {  
        for(i=2;i<49;i++)  
            arr[i]=(a*arr[i-1]+b*arr[i-2])%7;  
        printf("%d\n",arr[(n-1)%49]);      //数组下标从0开始，所以n先减1  
    }  
    return 0;  
}  

