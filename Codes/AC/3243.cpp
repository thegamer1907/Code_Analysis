#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define sz(x) (int)x.size()

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = (int)1e5 + 123;
const int mod = (int)1e9;
const ll inf = 1e18 + 9;

inline void boost () {
	ios_base::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
}
ll n, a[N];
pair < ll , int > b[N];

int main () {
 	boost ();
	cin >> n;
	for (int i = 0;i < n;i ++) cin >> a[i];
	for (int i = 0;i < n;i ++) {
		a[i] -= i;
		a[i] = max (0ll, a[i]);
		a[i] = (a[i] + n - 1) / n;
		b[i] = mp (i + n * a[i], i + 1);
	}	
	sort (b, b + n);
	cout << b[0].S;
	return 0;                                                   	
}
  	         