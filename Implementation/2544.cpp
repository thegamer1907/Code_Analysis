// Implementation practice (Have seen the editorial)
#include <bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << ": " << (a) << "\n"
#define RUNTIME prinf("%lf\n",(double)clock()/CLOCKS_PER_SEC);

typedef long long ll;

const int N = int(1e5) + 10;
int n, a, k, ans;

int main() {
	/*#ifdef LOCAL
	freopen("out", "w", stdout);
	freopen("in", "r", stdin);
	#endif*/
	ios::sync_with_stdio(false);cin.tie(NULL);

	cin >> n >> k;
	while(n--) {
		cin >> a;
		ans++;
		if (a > k) ans++;
	}
	cout << ans << endl;

	//RUNTIME
	return 0;
}