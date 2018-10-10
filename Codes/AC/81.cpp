#include <bits/stdc++.h>
using namespace std;

////////////// Prewritten code follows. Look down for solution. ////////////////
#define x first
#define y second
#define pb push_back
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cerr << #x " is " << (x) << endl
typedef pair<int, int> pii;
typedef long long ll;
const int INF = 1e9;

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

////////////////////////// Solution starts below. //////////////////////////////

const int MAXN = 5e5+10;

ll suffix[MAXN];
map<ll, int> suf;
int arr[MAXN];

int main ()
{
	int n;
	scanf ("%d", &n);
	if (n < 3) {
		printf ("0\n");
	} else {
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			scanf ("%d", &arr[i]);
			sum += arr[i];
		}
		ll aux = 0;
		for (int i = n-1; i > 1; i--) {
			aux += arr[i];
			suffix[i] = aux;
			suf[aux]++;
		}
		ll ans = 0;
		ll prefix = 0;
		for (int i = 0, j = 2; i < n-2; i++, j++) {
			prefix += arr[i];
			if (suf[prefix] && sum-2*prefix == prefix)
				ans += suf[prefix];
			suf[suffix[j]]--;
		}
		printf ("%lld\n", ans);
	}

	return 0;
}
