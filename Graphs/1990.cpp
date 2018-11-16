#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define pii pair<int,int>
#define large_int 2139062143
#define large_long_long_int 9187201950435737471
using namespace std;

#define NOV 100005

vector<int> gr[NOV];
int cat[NOV];
int M;

int count(int u, int p, int m){
	m -= cat[u];
	if(m<0)
		return 0;
	int cnt = 0, fl =0;
	for(int c:gr[u]){
		if(c!=p){
			fl = 1;
			if(cat[u])
				cnt += count(c,u,m);
			else
				cnt += count(c,u,M);
		}
	}
	if(fl)
		return cnt;
	else
		return 1;
}

int main(){
	ios_base::sync_with_stdio(false);

	int n,m,u,v;
	cin>>n>>m;
	M = m;
	for(int i=1;i<=n;i++)
		cin>>cat[i];

	for(int i=1;i<n;i++){
		cin>>u>>v;
		gr[u].pb(v);
		gr[v].pb(u);
	}

	cout<<count(1,-1,m)<<endl;
}