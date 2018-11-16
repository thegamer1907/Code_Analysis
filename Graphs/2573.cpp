#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
#define rof(i,a,b) for(int (i)=(a);(i) > (b); --(i))
#define coud(a,b) cout<<fixed << setprecision((b)) << (a)
#define iOS ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define all(a) a.begin() , a.end()
#define double long double
#define int long long
#define pb push_back
#define PB pop_back()
const int maxn=1e4+10;
vector<int> g[maxn];
bool mark[maxn];
int color[maxn];
int cc[maxn];
int res=0;
void dfs(int u)
{
    mark[u]=true;
    if(color[u] != cc[u])
    {
        color[u]=cc[u];
        ++res;
    }
    for(int i:g[u])
    {
        if(mark[i]==false)
        {
            color[i]=color[u];
            dfs(i);
        }
    }
}
int32_t  main()
{
    int n;
    cin>>n;
    For(i,2,n+1)
    {
        int f;
        cin>>f;
        g[i].pb(f);
        g[f].pb(i);
    }
    For(i,1,n+1)
    {
        cin>>cc[i];
    }
    dfs(1);
    cout<<res;
}


