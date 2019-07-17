#include "bits/stdc++.h"

using namespace std;

typedef long double db;
typedef long long ll;
typedef pair<db, db> pd;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define mod 1000000007
#define maxn 100005

ll n, m, k, x, y, p, q,  b[maxn], a[maxn];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> k;
	for (ll i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	
	ll cnt = 0;
	ll ans = 0;
	ll end = k;
	ll g = 1;
	for (ll i = 0; i < m; )
	{
		if(a[i] <= end){
			ans++;
			ll tmp = 0;
			while(i < m && a[i] <= end){
				cnt++;
				tmp++;
				i++;
			}
			end += tmp;
		}
		else{
			g = ceil((a[i] - cnt) / (k * 1.0));
			end = g * k + cnt;
		}
	}

	cout << ans;	

	return 0;
}