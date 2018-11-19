#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char kk[5];
char str[105][5];
int vis[5];

int main()
{
    int n;
    int flag;
    while(~scanf("%s",&kk))
    {
        flag=0;
        memset(vis,0,sizeof(vis));
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%s",str[i]);
            if(str[i][0]==kk[0] && str[i][1]==kk[1])
                flag=1;
            if(str[i][0]==kk[1])
                vis[1]=1;
            if(str[i][1]==kk[0])
                vis[0]=1;
        }
        if(flag || (vis[0]==1 && vis[1]==1))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
