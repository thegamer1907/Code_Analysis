#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define pi pair<ll,ll>
#define ppi pair<pair<ll,ll>,ll>
#define pii pair<ll,pair<ll,ll>>
#define fio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const ll inf = 1e9;
const ll mod = 1e9+7;
const ll zero = 0;
const ll maxn = 1e5 + 5;
using namespace std;

ll rev(ll num) {
	ll ret = 0;
	while ( num ) {
		ret += num % 10;
		num /= 10;
	}
	return ret;
}

ll nxt(ll num) {
	ll cpy = num, x = 0, t = 0, tmp, tmp2;
	bool fl = 1;
	while ( num % 10 == 0 ) {
		num /= 10;
		x++;
	}
	num--;
	tmp = num % 10;
	num /= 10;
	if ( num % 10 == 9 )
		fl = 0;
	num++;
	for ( int i = 0; i < x; i++ )
		num = num *10;
	num = num * 10 + tmp;
	if (!fl)
		num += 9;
	return num;
}
ll k, dp[maxn];
int main() {
	cin >> k;
	dp[1] = 19;
	for ( int i = 2; i <= k; i++ ) {
		dp[i] = nxt(dp[i - 1]);
	}
	cout << dp[k] << endl;

}


