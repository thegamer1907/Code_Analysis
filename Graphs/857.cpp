#include<bits/stdc++.h>
#define ll long long
using namespace std;
	ll n,m,x;
	vector<ll>v[5*10000];
	bool used[5*100000];
void dfs(ll x){
	used[x]=1;
	for(int i=0;i<v[x].size();i++)if(used[v[x][i]]==0)dfs(v[x][i]);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<n;i++){
		cin>>x;
		v[i].push_back(i+x);
	}
	dfs(1);
	if(used[m])cout<<"YES";
	else cout<<"NO";
}