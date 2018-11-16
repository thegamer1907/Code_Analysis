#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ii pair<int, int>
#define vi vector<int>
#define pb emplace_back
#define sz(x) (int)x.size()
#define all(v) v.begin(), v.end()
#define x first
#define y second
#define rep(i, j, k) for(i=j; i<k; i++)
#define sep(i, j, k) for(i=j; i>k; i--)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int inf = 1e9+7;
const int N = 2e5+5;
int n, k, id=0;
int A[N], par[N];

int root(int id){
	return (par[id] < 0) ? id: (par[id] = root(par[id]));
}
void merge(int a, int b){
	if((a=root(a)) == (b = root(b))) return;
	if(par[a] < par[b]) swap(a, b);
	A[b] = min(A[a], A[b]);
	par[b] += par[a];
	par[a] = b;
}

bool solve()
{
	int i, j, a, b, ans = 0;
	vi v;
	cin>>n>>k;
	memset(par, -1, sizeof par);
	rep(i, 1, n+1) cin>>A[i];
	rep(i, 1, k+1) cin>>a>>b, merge(a, b);
	rep(i, 1, n+1) if(par[i] < 0) ans += A[i];
	cout<<ans;
}

signed main()
{
	ios
	int i, t=1, j, x;
	// cin>>t;
	while(t--) 
		solve();
}
