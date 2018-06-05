#include<stdio.h>  
#include<string.h>  
int main()
{  
    int n,alen,blen,i,j=1,k,p=0;  
    char a[1000],b[1000],c[1001];  
    scanf("%d",&n);  
    while(n)
	{                              //不能是n--  
        scanf("%s %s",a,b);  
        printf("Case %d:\n",j);  
        printf("%s + %s = ",a,b);  
        alen=strlen(a)-1;  
        blen=strlen(b)-1;  
        for(k=0 ;alen>=0||blen>=0 ;alen--,blen--,k++)
		{  
            if(alen>=0&&blen>=0) 
			    c[k]=a[alen]+b[blen]-'0'+p;  
            if(alen<0&&blen>=0) 
			    c[k]=b[blen]+p;  
            if(alen>=0&&blen<0) 
			    c[k]=a[alen]+p;  
            p=0;                  //进位加上之后要清零  
            if(c[k]>'9') 
			{
		    	c[k]-=10;
		    	p=1; 
			}  
        }  
        if(p==1) 
		    printf("1");          //最后的进位p=1  
        while(k--)   
            printf("%c",c[k]);  
        j++;          
        if(n!=1)
		    printf("\n\n");  
        else printf("\n");
		n--;                       //此处n--  
    }  
    return 0;  
}  
