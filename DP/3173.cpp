#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second
#define eps 1e-9

int A[200005];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	int n, i, j, k, x, y, z;
	cin >> n;
	int ans = 1, cur = 1;
	for (i = 0; i < n; ++i) cin >> A[i];
	for (i = 1; i < n; ++i) {
		if (A[i] <= 2 * A[i-1]) {
			cur += 1;
		} else {
			cur = 1;
		}
		ans = max(ans, cur);
	}
	cout << ans << endl;

	return 0;
}