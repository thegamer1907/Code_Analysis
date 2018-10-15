#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define pb push_back
using namespace std;

const int N = 1e5;
ll a[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	ll sum = accumulate(a, a + n, 0ll);
	ll lo = *max_element(a, a + n);
	ll hi = 1e10;
	ll ans = -1;
	while(lo <= hi){
		ll mid = (lo + hi) / 2;
		if(sum <= (n - 1) * mid){
			ans = mid; 
			hi = mid - 1;
		}
		else lo = mid + 1;
	}
	cout << ans << endl;

	return 0;	
}