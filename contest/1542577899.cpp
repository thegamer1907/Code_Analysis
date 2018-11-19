#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+100;
int vis[maxn];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int ok=0;
    for(int i=1; i<=n; i++)
    {
        int sum=0,x=0;
        for(int j=1; j<=k; j++)
        {
            int t;
            scanf("%d",&t);
            sum=sum*10+t;
            x=x*2+t;
        }
        vis[x]++;
        if(!sum) ok=1;
    }
    if(ok)
    {
        puts("YES");
        return 0;
    }
    int mask=1<<4;
    for(int i=1; i<mask; i++)
    {
        if(!vis[i]) continue;
        for(int j=1; j<mask; j++)
        {
            if(!vis[j]) continue;
            if(i == j && vis[i] == 1 && vis[j] == 1) continue;
            if(!(i&j))
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}
