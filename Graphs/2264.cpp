/*
#####################################################
# I will win.. maybe not immediately but definitely #
#####################################################
*/

#include<bits/stdc++.h>
#define ll          long long
#define pll         vector< pair<ll ,ll> >
#define vll         vector<ll>
#define vi          vector<int>
#define hell        1000000007
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define pb          push_back
#define F           first
#define S           second
#define mp          make_pair
#define all(v)      v.begin(), v.end()
#define lb          lower_bound  //value not less than(>=)
#define ub          upper_bound  //value greater than(>)
#define bs          binary_search
#define pcont(v)    for(auto it:v) cout<<it<<" ";cout<<endl
#define ret(x)      return cout << x,0;
#define pi          pair<ll,pair<ll,ll> >
#define endl        '\n'
ll const MAX = 1e5+5;
using namespace std;

vll adj[MAX];
ll vis[MAX];
set<ll> ans;

void dfs(ll v, ll l)
{
    ans.insert(l);
    vis[v]=1;
    for(auto i:adj[v])
        dfs(i,l+1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

    ll n,x;
    cin >> n;
    rep(i,1,n+1)
    {
        cin >> x;
        adj[x].pb(i);
    }
    rep(i,1,n+1) if(!vis[i]) dfs(i,0);
    ret(ans.size());
}
