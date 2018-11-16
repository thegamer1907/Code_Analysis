#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
map<ll,ll>mp;
vector<ll >v[N];
vector< pair < ll,ll> >u;
bool vis[N];
ll lev[N],a[N];

void dfs(int s)
{
    vis[s]=1;
    for(auto i : v[s])
    {
      if(!vis[i])
      dfs(i);
    }
}

int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll ans=0,k,n,q=0,x,z=0,t1,t2,m,i=0,j=0,e=-1e4,y;
    cin>>n>>k;
	for(int i=1;i<n;i++)
    {
        cin>>x;
        v[i].push_back(x+i);
    }
    dfs(1);
    if(vis[k])
    return cout<<"YES",0;
    else
    cout<<"NO";
	return 0;
}
