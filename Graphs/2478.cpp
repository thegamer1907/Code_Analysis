#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define F(i,n) for(int i=0;i<n;++i)
#define vi vector<int>
#define vd vector<double>
#define vl vector<ll>
#define vb vector<bool>
#define vec(q) for(auto &i : q) cin>>i;
#define vvi vector< vector<int> >
using namespace std;
vvi q;
vi s;
vb used;
int ans=0;
void dfs(int v , int p)
{
    used[v]=1;

    if(s[v]!=s[p])
    {
        ++ans;
    }
    F(i,q[v].size())
    {
        if(!used[q[v][i]])
        {
            dfs(q[v][i],v);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a;
    q.resize(n);
    used.resize(n);
    F(i,n-1)
    {

        cin>>a;
        --a;
        q[i+1].pb(a);
        q[a].pb(i+1);

    }
    s.resize(n);
    vec(s);
    dfs(0,0);
    cout<<ans+1;
    return 0;
}
