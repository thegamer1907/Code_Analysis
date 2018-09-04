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

#define N 10000000
int A[N+5], P[N+5];

void init()
{
	int i, j;
	for (i = 2; i <= N; ++i) {
		if (A[i] == 0) {
			A[i] = i;
			if (i*i > N) continue;
			for (j = i+i; j <= N; j += i) {
				if (!A[j]) A[j] = i;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
	init();
	int n, i, j, k, x, y, z;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> x;
		while (x > 1) {
			y = A[x];
			while (x%y == 0) x /= y;
			++P[y];
		}
	}
	for (i = 1; i <= N; ++i) P[i] += P[i-1];
	cin >> n;
	while (n--) {
		cin >> x >> y;
		y = min(y, N);
		x = min(x, N);
		cout << P[y] - P[x-1] << endl;
	}

	return 0;
}
