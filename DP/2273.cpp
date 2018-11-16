#include <cstdio>  
int flag[100010];  
int a[100010];  
int w[100010];  
int main()  
{  
    int n,m;  
    scanf("%d%d",&n,&m);  
    for(int i=1;i<=n;i++)  
    {  
        scanf("%d",&a[i]);  
    }  
    for(int i=n;i>=1;i--)  
    {  
        if(flag[a[i]]==0)  
        {  
            w[i]=w[i+1]+1;  
            flag[a[i]]=1;  
        }  
        else  
        {  
            w[i]=w[i+1];  
        }  
    }  
    for(int i=0;i<m;i++)  
    {  
        int x;  
        scanf("%d",&x);  
        printf("%d\n",w[x]);  
    }  
    return 0;  
}   