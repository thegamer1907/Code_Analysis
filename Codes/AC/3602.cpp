#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[200020];
ll b[200020];
ll c[200020];
ll d[200020];
int main (){
	ll n,m,k;
	cin >> n >> m >> k;
	ll x,s;
	cin >> x >> s;
	for (int i = 0; i < m; i++){
		scanf("%lld",&a[i]);
	}
	for (int i = 0; i < m; i++){
		scanf("%lld",&b[i]);
	}
	for (int i = 0; i < k; i++){
		scanf("%lld",&c[i]);
	} 
	for (int i = 0; i < k; i++){
		scanf("%lld",&d[i]);
	} 
	ll ans = (n-c[upper_bound(d,d+k,s)-d-1])*x;
	for (int i = 0; i < m; i++){
		if (b[i] > s) continue;
		ans = min(ans,(n-c[upper_bound(d,d+k,s-b[i])-d-1])*a[i]);
	}
	cout << ans << endl;
	return 0;
}