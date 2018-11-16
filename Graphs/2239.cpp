#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<int, ii> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define sc(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x) scanf("%s", x)
#define sc4(x) scanf("%lld", &x)
#define sc5(x, y) scanf("%lld %lld", &x, &y)
#define all(a) a.begin(), a.end()
#define mse(a, x) memset(a, x, sizeof(a))
#define mod 1000000007
#define DREP(a) sort(all(a)); a.erase(unique(all(a)),a.end());
#define INDEX(arr,ind) (lower_bound(all(arr),ind)-arr.begin())
#define DEBUG 1
#define ok if(DEBUG)
#define trace(x) ok cerr << #x << ": " << x << endl;
#define trace2(x, y) ok cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z) ok cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) ok cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " \
								<< #d << ": " << d << endl;
#define trace5(a, b, c, d, e) ok cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " \
									  << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) ok cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " \
									     << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

vi g[2020];

int calc(int u, int l) {
	int res = l;
	for(auto i:g[u]) {
		res = max(res, calc(i, l+1));
	}
	return res;
}

int main() {
	int n;
	sc(n);
	int p;
	vi root;
	fi(i, 1, n+1) {
		sc(p);
		if(p != -1) {
			g[p].pb(i);
		} else {
			root.pb(i);
		}
	}
	int res = 1;
	for(auto i:root) {
		res = max(res, calc(i, 1));
	}
	printf("%d\n", res);
	return 0;
}
