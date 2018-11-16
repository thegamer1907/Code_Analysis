#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
typedef long long li;
#define endl '\n'
#define len(s) (s).length()
#define boost ios::sync_with_stdio(0); cin.tie(0);

bool vis[100000];
vector<int> v[100000];


void dfs(int s){

	vis[s] = true;
	for(auto it : v[s])
		if(!vis[it])
			dfs(it);
}


signed main(){

	int n,t;
	cin>>n>>t;
	int i;

	for(i = 1 ; i <= n - 1 ; ++i){
		int a;
		cin>>a;
		v[i].pb(i+a);
	}
	dfs(1);

	if(vis[t])
		cout<<"YES\n";
	else cout<<"NO\n";
}