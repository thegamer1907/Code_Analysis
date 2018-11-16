#include <bits/stdc++.h>
#define hell 1000000007
#define ll long long
using namespace std;
ll parent[100001],cat[100001],vis[100001],isparent[100001],m,ans;
vector<ll> arr[100001];
vector<ll>v;
void dfs(ll root,ll cnt){
	vis[root]=1;
	if(cat[root])cnt++;
	ll flag=0;
	for(ll i=0;i<arr[root].size();i++){
		if(!vis[arr[root][i]]){
			flag=1;
			if(cat[arr[root][i]]&&cnt<=m)dfs(arr[root][i],cnt);
			else if(!cat[arr[root][i]]&&cnt<=m) dfs(arr[root][i],0);
		}
	}
	if(flag==0&&cnt<=m)ans++;
	return;
}
int main(){
	ios::sync_with_stdio(false);
	ll i,j,k=0,n,x,y,cnt,p;
	cin>>n>>m;
	for(i=1;i<=n;i++)cin>>cat[i];
	for(i=0;i<n-1;i++){
		cin>>x>>y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	parent[1]=-1;
	dfs(1,0);
	cout<<ans;
}

