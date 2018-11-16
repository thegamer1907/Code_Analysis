#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
#define ll long long int
#define ppi pair<int,int>
#define ppl pair<ll,ll>
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define ff first	
#define ss second
#define rep(i,a,b) for(int i=a;i<b;i++)
void fastio(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


vector<int> adj[2005];

int dfs(int i){
	int ans=0;
	for(int v:adj[i]){
		ans=max(ans,dfs(v));
	}
	return ans+1;
}
void solve(){
	int n;cin>>n;
	vi roots;
	rep(i,1,n+1){
		int p;
		cin>>p;
		if(p==-1){
			roots.pb(i);
			continue;
		}
		adj[p].pb(i);
	}

	int ans=0;
	for(int x:roots){
		ans=max(ans,dfs(x));
	}
	cout<<ans<<endl;
}

int main(){
	fastio();
	int t;
	// cin>>t;
	t=1;
	while(t--){
		solve();
	}	
	return 0;
}	