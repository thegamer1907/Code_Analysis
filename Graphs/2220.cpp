#include <bits/stdc++.h>
#define hell 1000000007
#define ll long long
using namespace std;
vector<ll> v[2001];
ll arr[2001],le[2001],maxi=0;
void dfs(ll root ,ll lev){
	le[root]=lev;
	maxi=max(maxi,lev);
	for(int i=0;i<v[root].size();i++){
		dfs(v[root][i],lev+1);
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	ll i,j,k,n,cnt=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>arr[i];
		if(arr[i]!=-1){
			v[arr[i]].push_back(i);
		}
	}
	for(i=1;i<=n;i++){
		if(arr[i]==-1){
			dfs(i,1);
		}
	}
	cout<<maxi;
}

