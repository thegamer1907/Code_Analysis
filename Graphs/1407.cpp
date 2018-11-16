
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define sd second
#define fst first
#define lp(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define PI 3.14159265
vector<int>g[30005];
bool vs[1000005];int i;
void dfs(int n)
{
    vs[n]=1;
    for(auto x:g[n])
    {
        if(!vs[x])
            dfs(x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;cin>>n>>t;
    int a[n];
    lp(i,n-1)cin>>a[i];
    i=0;
    lp(i,n-1)
    {
        g[i+1].pb(i+a[i]+1);
    }
    dfs(1);
    if(vs[t])cout<<"YES";
    else cout<<"NO";
    return 0;
}