#include<bits/stdc++.h>
#define LL long long

using namespace std;

int ara[2005];
vector<int>td[2005];
bool vis[2005];
int dph;
void dfs(int pos,int depth)
{
    if(vis[pos]==1)return;
    dph = max(dph,depth);
    vis[pos]=1;

    for(int i=0;i<td[pos].size();i++)
    {
        int now = td[pos][i];
        dfs(now,depth+1);
    }

}
int main()
{
//    std::ios_base::sync_with_stdio(0);
//    cin.tie(nullptr);
    int n;
    cin >> n;
    int i;
    for(i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        if(x!=-1)td[x].push_back(i);
    }
    for(i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
            dfs(i,1);

    }
    cout << dph;


}