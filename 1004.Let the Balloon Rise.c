#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, j, max, num[1000];
    char boloon[1000][16];
    while (scanf("%d", &n) !=EOF)
	{
		if(n==0)  break;
        if (n) 
		{
            for (i = 0; i < n; i++) 
			{
                num[i] = 0;
                scanf("%s", boloon[i]);
                num[i] += 1;
                for (j = 0; j < i; j++) 
				{
                    if (strcmp(boloon[i], boloon[j]) == 0)
                        num[i] += 1;
                
                }
            }
            max = 0;
            for (i = 0; i < n; i++) 
			{
                if (max < num[i]) 
				{
                    max = num[i];
                    j = i;
                }
            }
            printf("%s\n", boloon[j]);
        }
    }
    return 0;
}
