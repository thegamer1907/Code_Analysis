#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=2003;


ll n;
vector<ll> adj[mx];
bool visited[mx];

ll dfs(ll u){

	visited[u]=true;
	ll ret=1;
	for(ll i=0;i<(ll)adj[u].size();i++){
		ll v=adj[u][i];
		if(!visited[v]){
			ret=max(ret,1+dfs(v));
		}
	}

	return ret;
}

int main(){
	scanf("%lld",&n);
	vector<ll> root;
	for(ll i=1;i<=n;i++){
		ll x;
		scanf("%lld",&x);
		if(x!=-1)adj[x].push_back(i);
		else root.push_back(i);
	}
	ll maxi=1;

	for(ll i=0;i<(ll)root.size();i++){
			maxi=max(maxi,dfs(root[i]));
	}
	printf("%lld\n",maxi);

}