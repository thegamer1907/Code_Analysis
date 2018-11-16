#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
int a[100005];
int ans;
//int cats[100005];
//int maxer[100005];
vector<int> egs[100005];
/*
int bfs()
{
    memset(cats,0,sizeof cats);
    memset(maxer,0,sizeof maxer);
    queue<int> qq;
    qq.push(1);
    while(!qq.empty())
    {
        int now=qq.front();
        bool hascats;
        if(a[now])
        {
            hascats=true;
            if(cats[now]==0)
            {
                cats[now]=1;
            }
        }
        else
        {
            hascats=false;
            cats[now]=0;
        }
        for(int i=0;i<egs[now].size();i++)
        {
            int nxt=egs[now][i];
            if(a[nxt])
            {
                cats[nxt]+=cats[now];
            }
        }
    }
}
 */
int n,m;
void dfs(int now,int maxcat,int nowcat,bool lastcat,int fa)
{
    if(lastcat)
    {
        nowcat+=a[now];
    } else{
        nowcat=a[now];
    }
    if(a[now])
    {
        lastcat=true;
    }
    else
    {
        lastcat=false;
        nowcat=0;
    }
    maxcat=max(maxcat,nowcat);
    if(egs[now].size()==1 && now!=1)
    {
        if(maxcat<=m)
        {
            ans++;
        }
        return;
    }
    for(int i=0;i<egs[now].size();i++)
    {
        int nxt=egs[now][i];
        if(nxt!=fa)
            dfs(nxt,maxcat,nowcat,lastcat,now);
    }
}
int main() {

    cin>>n>>m;
    ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        int aa,bb;
        cin>>aa>>bb;
        egs[aa].push_back(bb);
        egs[bb].push_back(aa);
    }
    dfs(1,0,0,true,0);
    cout<<ans<<endl;
    return 0;
}