#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define F first
#define S second
#define pb emplace_back
#define pi pair<int,int>
using namespace std;
const int maxn = 1e5 + 4;
const ll mod = 1e9 + 7;

int t, k;
ll ans[maxn];
int x, y;

int main(){
	// freopen("scc", "r", stdin);
	// freopen("in.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t>>k;
	for (int i = 0; i < k; ++i){
		ans[i] = 1;
	}
	for (int i = k; i < maxn; ++i){
		ans[i] = (ans[i-1] + ans[i-k]) % mod;
	}
	for (int i = 1; i < maxn; ++i){
		ans[i] += ans[i-1];
		ans[i] %= mod;
	}
	for (int i = 0; i < t; ++i){
		cin>>x>>y;
		cout<<(ans[y]-ans[x-1]+mod)%mod<<'\n';
	}
}