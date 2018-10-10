#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define pii pair < int , int >
#define task ""
#define int long long

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int N = 2e5 + 123;
const int mod = 1e9 + 7;
const int INF = 1e9 + 1;
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);

inline void DoBetter () {
    unsigned int FOR;
    asm("rdtsc" : "=a"(FOR));
    srand (FOR);
    ios_base::sync_with_stdio (0);
    cin.tie (0); cout.tie (0);
}
int n, k, a[N], ans;
map < int , int > pref, suff;

main () {               	
	cin >> n >> k;
	for (int i = 1;i <= n;i ++) cin >> a[i];
	for (int i = 1;i <= n;i ++) suff[a[i]] ++;
	for (int i = 1;i <= n;i ++) {
		suff[a[i]] --;
		if (a[i] % k == 0) {
			ll x = pref[a[i] / k];
			ll z = suff[a[i] * k];
			ans += x * z;
		}
		pref[a[i]] ++;
	}
	cout << ans;
return 0;       
}
            
