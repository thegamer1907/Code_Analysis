// start of CP 2.0
#include <bits/stdc++.h>

//____By:sirjan13____

#define int long long
#define mod 1000000007
#define show(a) for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
#define fi first
#define se second
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
#define pb push_back
#define pi pair<int,int>
#define si set<int>
#define all(v) v.begin(),v.end()
#define sotlaga() sort(v.begin(), v.end())
#define sll set<ll>
#define maxheap priority_queue<int>
#define minheap priority_queue<int,vector<int>,greater<int>>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define long_zero 0ll
#define long_one 1ll
#define N 100005

inline int sbt(int x){return __builtin_popcount(x);}

using namespace std;

vector<pair<int, int>> a;
int pre[N + 5], x, y;
vi v;

int32_t main() {
    fast_io()
    
	int n, d;
	cin >> n >> d;

	for(int i = 0; i < n; i++) {
	    cin >> x >> y;
	    a.pb(mp(x, y));
	}
	
	sort(a.begin(), a.end());
	
	for(auto nei: a) {
	    v.pb(nei.fi);
	}
	
	pre[0] = a[0].se;
	for(int i = 1; i < n; i++) {
	    pre[i] = pre[i - 1] + a[i].se;
	}
	
	int maxi = 0;
	for(int i = 0; i < n; i++) {
	    auto it = upper_bound(all(v), v[i] + d - 1) - v.begin();
	    maxi = max(maxi, (pre[it - 1] - ((i) ? pre[i - 1] : 0)));
	}
	cout << maxi;
	return 0;
}
