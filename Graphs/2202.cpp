#pragma GCC optimize("O3")
#include <bits/stdc++.h>   

#define rep(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define N 1000005
#define se second
#define fi first
#define pie 3.141592654
#define pll pair<ll,ll> 
#define pb push_back
typedef long long ll;

using namespace std;

ll par[2*N/1000+5],vis[2*N/1000+5];
vector<vector<int> > G(N);
ll dfs(ll cur,ll level){
	vis[cur]=level;
	ll ans=level;
	for(auto ele:G[cur]){
		ans=max(ans,dfs(ele,level+1));
	}
	return ans;
}

void solve(){
	 int n;
	 cin>>n;
	 rep(i,1,n+1){
	 	cin>>par[i];
	 	if(par[i]!=-1){
	 		G[par[i]].pb(i);
	 	}
	 }
	 ll ans=0;
	 rep(i,1,n+1){
	 	if(par[i]==-1){
	 		//memset(vis,0,sizeof(vis));
	 		ans=max(ans,dfs(i,1));
	 	}
	 }
	 cout<<ans<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int tc=1;
	//cin>>tc;
	while(tc--)solve();
  	return 0;
}