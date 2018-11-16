#include <bits/stdc++.h>

using namespace std;

using ll = long long;


int son[120000];
int cnt = 1;

int dfs(int i,int s)
{
    if (son[i]!=-1)
    {
        return dfs(son[i],s+1);
    }
    else
        return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i =1 ; i <= n ; i ++)
    {
        scanf("%d",&son[i]);
    }
    int ans = 0;
    for (int i = 1 ; i <= n ; i ++)
        ans = max(dfs(i,1),ans);
    printf("%d\n",ans);
    return  0;

}
