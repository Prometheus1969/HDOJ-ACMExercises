#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    int i,j,len,t,n,N;
    scanf("%d",&N);
    getchar();
    for(n=0; n<N; n++)
    {
        i=0;
        gets(s);
        int mnm=0,flag;
        len=strlen(s);
        while(i<len)
        {
            flag=1;
            for(i=mnm; i<len; i++)
            {
                if(s[i]==s[i+1])
                flag++;
                else
                {
                    if(flag==1)
                    printf("%c",s[i]);
                    else
                    {
                        printf("%d%c",flag,s[i]);
                        flag=1;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
