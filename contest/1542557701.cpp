#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define dec(i,a,b) for(int (i)=(a);(i)>=(b);(i)--)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
#define clr(a, b) memset(a, b, sizeof a)
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;

const int N = 100010, K = 22;
int n, k, a[N];
ll dp[N][K];
ll tl, tr, tot, qt[N], ori[N];

ll c2(ll xx) {
	return (((xx) * (xx - 1)) / 2);
}

void ajusta(int l, int r) {
	/*cerr << " --------- inicio ---------------" << endl;
	cerr << l << ' ' << r << endl;
	cerr << tl << ' ' << tr << ' ' << tot << endl;*/
	while(tr > r) {
		tot -=  qt[a[tr]] - 1;
		qt[a[tr]]--;
		tr--;
	}
	while(tr < r) {
		tr++;
		tot += qt[a[tr]];
		qt[a[tr]]++;
	}	
	//if(l == r && l == 5) cerr << "oi " << tot << endl;
	while(tl < l) {
		tot -= qt[a[tl]] - 1;
		qt[a[tl]]--;
		tl++;
	}	
	while(tl > l) {
		tl--;
		tot += qt[a[tl]];
		qt[a[tl]]++;
	}
	/*cerr << tl << ' ' << tr << ' ' << tot << endl;
	cerr << "----------------fim-----------------" << endl;*/
}

int solve(int l, int r, int optl, int optr, int it) {
	if(l > n || l <= 0 || r > n || r <= 0) return 0;
	if(l > r) return 0;
	int mid = (l + r) / 2;
	if(dp[mid][it] != -1) return dp[mid][it];
	int optmd = -1;
	ll ans = 1e18 + 2;
	rep(opt, max(optl, mid), optr + 1) {
		ajusta(mid, opt);
		if(ans > (dp[opt + 1][it - 1] + tot)) {
			ans = dp[opt + 1][it - 1] + tot;
			optmd = opt;
		}	
	}	
	solve(l, mid - 1, optl, optmd, it); solve(mid + 1, r, optmd, optr, it);
	return dp[mid][it] = ans;
}

int main() {	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin >> n >> k;
	rep(i,1,n + 1) cin >> a[i];    	
	rep(i,1,n + 1) rep(j,1,k + 1) dp[i][j] = -1;
	rep(i,1,n + 1) qt[a[i]]++;
	ll ans = 0;
	rep(i,1,n + 1) ans += c2(qt[i]);
	rep(i,1,n + 1) {
		dp[i][0] = ans;
		ans -= qt[a[i]] - 1;
		qt[a[i]]--;
	}
	rep(i,1,k) {
		tl = tr = 1;
		tot = 0;
		clr(qt,0);
		qt[a[1]]++;
		solve(1, n, 1, n, i);
	}
	cout << dp[1][k-1] << endl;
}