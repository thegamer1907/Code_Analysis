#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
//ios_base::sync_with_stdio(0);
//cin.tie(0);
#define mod1 100000007
#define inf 1000000000000
#define set(pos,i) pos|1<<i
#define check(pos,i) pos&1<<i
vector<ll>v[2010];
queue<ll>par;
bool vis[2010];
ll depth[2010];
ll bfs(ll total)
{
    queue<ll>q;
    stack<ll>st;
    for(ll i=1; i<=total; i++)
    {
        if(vis[i])
            continue;
        q.push(i);
        st.push(i);
        vis[i]=1;
        while(!q.empty())
        {
            ll u=q.front();
            q.pop();
            for(ll j=0; j<v[u].size(); j++)
            {
                ll s=v[u][j];
                if(vis[s])
                    continue;
                vis[s]=1;
                q.push(s);
            }
        }
    }
    memset(vis,0,sizeof vis);
    while(!st.empty())
    {
        ll u=st.top();
        st.pop();
        if(vis[u])
            continue;
        par.push(u);
        vis[u]=1;
        for(ll j=0; j<v[u].size(); j++)
        {
            ll s=v[u][j];
            if(vis[s])
                continue;
            vis[s]=1;
            depth[s]=depth[u]+1;
            st.push(s);
        }
    }
}
int main()
{
    ll total,val;
    scanf("%lld",&total);
    for(ll i=1; i<=total; i++)
    {
        scanf("%lld",&val);
        if(val==-1)
            continue;
        v[val].push_back(i);
    }
    bfs(total);
    par.push(inf);
    ll cnt=1;
    while(par.size()>1)
    {
        ll u=par.front();
        par.pop();
        if(u==inf)
        {
            cnt++;
            par.push(inf);
            continue;
        }
        for(ll i=0; i<v[u].size(); i++)
        {
            if(depth[v[u][i]]>=3)
                continue;
            par.push(v[u][i]);
        }
    }
    printf("%lld\n",cnt);
}
