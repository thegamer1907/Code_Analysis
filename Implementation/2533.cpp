#include <bits/stdc++.h>

#define rust(a, b, c, d) sqrt(sqr(a - c) + sqr(b - d))
#define sqr(a) (a)*(a)
#define m_p make_pair
#define fi first
#define se second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pll pair <ll,ll>
#define vl vector <ll>

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1e6;
const double eps = 1e-9;
const ll mod = 1e9 + 7;
using namespace std;
ll n, h, a[MAXN];
int main() {

	srand(time(0));
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
    fast_io;
    cin >> n >> h;
    ll ans = 0;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if (a[i] <= h) ans++;
        else ans += 2;
    }
    cout << ans << endl;
	return 0;
}