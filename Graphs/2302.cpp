#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pub push_back
#define pob pop_back
#define pq priority_queue
#define ext exit(0)
#define ff first
#define ss second
ll n,a[111111],i,ans,b[111111];
vector<ll>v[111111],vv;
void dfs(int k, ll d){
	b[k]++;
	ans=max(ans,d);
	for(int i=0;i<v[k].size();i++){
		if(!b[v[k][i]])dfs(v[k][i],d+1);
	}
}
int main () {
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==-1) vv.pub(i);
		else {
			v[a[i]].pub(i);
		}
	}
	for(i=0;i<vv.size();i++){
		dfs(vv[i],1);
	}
	cout<<ans;
}