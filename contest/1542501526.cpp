/*input
12 0 1 12 1

*/
#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
#define F first
#define S second
#define pb push_back
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


#define N 200005
#define mod 1000000007


int main()
{
	ios::sync_with_stdio(false);
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	ll H = (h%12)*60*60 + m*(60) + s;
	ll M = m*(12*60) + s*12;
	ll S = s*12*60;
	ll T1 = (t1%12) * 60 * 60;
	ll T2 = (t2%12) * 60 * 60;
	bool isPoss1 = true;
	bool isPoss2 = true;
	// cout << H << endl;
	// cout << M << endl;
	// cout << S << endl;
	// cout << T1 << endl;
	// cout << T2 << endl;
	for(ll i = 1; i <= 12 * 60 * 60; i++) {
		ll ii = (i + T1) % (12 * 60 * 60);
		if(ii == T2)
			break;
		if(H == ii || M == ii || S == ii) {

			isPoss1 = false;
			break;
		}
	}
	for(ll i = 1; i <= 12 * 60 * 60; i++) {
		ll ii = (i + T2) % (12 * 60 * 60);
		if(ii == T1)
			break;
		if(H == ii || M == ii || S == ii) {
			isPoss2 = false;
			break;
		}
	}
	if(isPoss1 || isPoss2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}