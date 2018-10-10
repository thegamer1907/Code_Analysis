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

int n;
ll sum;
int suffix[MAXN];
int arr[MAXN];

int main ()
{
	scanf ("%d", &n);
	if (n < 3)
		printf ("0\n");
	else {
		for (int i = 0; i < n; i++) {
			scanf ("%d", &arr[i]);
			sum += arr[i];
		}
		if (sum%3!=0)
			printf ("0\n");
		else {
			sum/=3;
			ll suf = 0;
			for (int i = n-1; i > 1; i--) {
				suf+=arr[i];
				if (suf == sum)
					suffix[i]++;
				suffix[i]+=suffix[i+1];
			}
			ll prefix = 0;
			ll ans = 0;
			for (int i = 0; i < n-2; i++) {
				prefix += arr[i];
				if (prefix == sum)
					ans += suffix[i+2];
			}
			cout << ans << '\n';
		}
	}

	return 0;
}
