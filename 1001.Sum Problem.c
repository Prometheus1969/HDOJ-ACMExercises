#include <stdio.h>  
int main()  
{  
    int n, i, sum;  
    while(scanf("%d", &n) != EOF)  
    {  
        sum = 0;  
        for(i = 0; i <= n; i ++)  
            sum = sum + i;  
        printf("%d\n\n", sum);  
    }  
    return 0;  
}  
