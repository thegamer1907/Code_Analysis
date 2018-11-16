#pragma loop_opt(on)
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define int long long 
#define IOS ios::sync_with_stdio(0);
#define pi pair<int,int>
#define REP(i,j,k) for(int i = j; i < k; ++i)
#define all(v) (v).begin(),(v).end()
#define endl '\n'
#define debug(a) cout << #a << " = " << a << endl;
#define pb emplace_back
using namespace std;
int n,m;
vector<int> a[10009];
int color[10009];
int vis[10009];
int ans = 0;
void dfs(int x,int f)
{
	if(color[x] != vis[f]) ++ans;
	vis[x] = color[x];
	for(auto i:a[x]) if(i != f) dfs(i,x);
}
signed main()
{
	cin >> n;
	REP(i,0,n-1)
	{
		int b; cin >> b;
		a[i+2].pb(b), a[b].pb(i+2);
	}
	REP(i,0,n) cin >> color[i+1];
	dfs(1,0);
	cout << ans;
}