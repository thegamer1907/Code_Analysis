#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> ii;
#define MAXN 51
#define INF 1000000007

ll val[MAXN];

int solve(int n, ll k){
	if (k < val[n]) return solve(n - 1, k);
	k -= val[n];
	
	if (k == 0) return n + 1;
	
	k--;
	return solve(n - 1, k);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	ll k;
	
	cin>>n>>k;
	
	val[0] = 0;
	for (int i = 1; i <= n; ++i){
		val[i] = 2 * val[i - 1] + 1;
	}
	
	cout<<solve(n - 1, k - 1)<<'\n';
}