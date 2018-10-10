//  In The Name Of God
// FYIHTRIA
#include <bits/stdc++.h>

#define SET(A, X) (A |= (1 << X))
#define GET(A, X) ((A & (1 << X)) && 1)
#define sqr(A) (A) * (A)
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int INF = (1LL << 31) - 1;
const ll LINF = LLONG_MAX;

const int maxn = 1e5 + 1;
int n, k, a[maxn], b[maxn], pa[maxn], pb[maxn];
string s;

int solve(int* Array) {
	int i = 0, j = -1, x, y = 0;
	for (x = 1; x <= n; x++) {
		if (y < x)
			y = x;
		while (y < n) {
			if (Array[y] - Array[x - 1] > k)
				break;
			y++;
		}
		if (Array[y] - Array[x - 1] > k)
			y--;
		if (y - x + 1 > j - i + 1)
		i = x, j = y;
	}
	return j - i + 1;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> k >> s;
	for (int i = 1; i <= n; i++) {
		a[i] = (s[i - 1] == 'a');
		b[i] = (s[i - 1] == 'b');
		pa[i] = pa[i - 1] + !a[i];
		pb[i] = pb[i - 1] + !b[i];
	}
	cout << max(solve(pa), solve(pb)) << endl;
}
