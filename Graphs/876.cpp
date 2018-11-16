#include<cstdio>
#include<cstring>
using namespace std;
int a[30005],vis[30005];
int main()
{
     int n,t,flag;
     while(~scanf("%d %d",&n,&t))
     {
         flag=0;
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
        for(int i=1;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=1;i<n&&i<=t;)
        {
           i=i+a[i];
           if(i==t)
          flag=1;
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
     }
    return 0;
}