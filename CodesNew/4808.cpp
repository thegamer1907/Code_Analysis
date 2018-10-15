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
#define deb 0

int A[1000000], M[1000000];

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	int n, i, j, k, x, y, z;
	cin >> n;
	for (i = 0; i < n; ++i) cin >> A[i];
	sort(A, A+n);
	i = 0;
	j = n/2;

	int ans = n;
	while (j < n) {
		if (M[i]) {
			i++;
			continue;
		}
		if (A[j] < A[i]+A[i]) j++;
		else {
			M[j] = 1;
			i++;
			j++;
			ans--;
		}
	}
	cout << ans << endl;

	return 0;
}
