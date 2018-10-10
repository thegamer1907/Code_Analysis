#include <bits/stdc++.h>
using namespace std;

#define endl    "\n"
#define pb      push_back
#define all(v)  v.begin(),v.end()
#define FAST    ios_base::sync_with_stdio(0);cin.tie(0);
#define fin(f)  freopen(f,"r",stdin)
#define fout(f) freopen(f,"w",stdout)

typedef long long     ll;
typedef long double   ld;
typedef pair<int,int> ii;

const int    inf = 2e9;
const ll     INF = 4e17;
const int    mod = 1e9+7;
const double eps = 1e-9;

int main() {
	ll n, k;
	cin >> n >> k;
	for(;;) {
		if(k == (1ll<<(n-1))) {
			cout << n;
			return 0;
		}
		else if(k > (1ll<<(n-1))) 
			k -= (1ll<<(n-1));
		n--;
	}
	return 0;
}
