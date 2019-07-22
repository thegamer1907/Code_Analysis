#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

#define mod 1000000007
#define inf 0x3f3f3f3f
#define infll ((ll) 1e18 + 10)

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define trav(a, x) for(auto& a : x)
#define all(x) (x).begin(), (x).end()
#define debug(x) cout<<#x<<": "<<(x)<<'\n'
#define prec(p) cout << fixed << setprecision(p)
#define rep(i, a, b) for(int i = a; i < (b); i++)
#define repd(i, a, b) for(int i = (a)-1; i >= (b); i--)
#define debugv(a, b) cout<<#a<<": ";for(auto i=a;i!=b;i++)cout<<*i<<' ';cout<<'\n';


ll n, m, k, i, j, num, ans, v[100010];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m >> k;
	rep(vi, 0, m) cin >> v[vi];
	while (j < m) {
		num = j;
		while (j < m && v[j] <= i*k + num) j++;
		if (j > num) ans++;
		else i++;
	}
	cout << ans << endl;
}