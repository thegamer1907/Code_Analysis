#include <bits/stdc++.h>
using namespace std;
int n,k;
const int maxn=1e5+7;
bool vis[50];
bool solve()
{
    if(vis[0])  return true;
    for (int i=1;i<20;i++)
    {
        if(!vis[i]) continue;
        for (int j=1;j<20;j++)
            if((j&i)==0&&vis[j])    return true;
    }
    return false;
}
int main()
{
    scanf("%d%d",&n,&k);
    for (int i=1;i<=n;i++)
    {
        int tmp=0;
        for (int i=0;i<k;i++)
        {
            int b;scanf("%d",&b);
            tmp<<=1;
            tmp|=b;
        }
        vis[tmp]=true;
    }
    if(solve())
        puts("YES");
    else
        puts("NO");
}
