//  In The Name Of God
// TTLDOMLIWPTTE
#include <bits/stdc++.h>

#define SET(A, X) (A | (1 << X))
#define OFF(A, X) (A & ~(1 << X))
#define GET(A, X) ((A & (1 << X)) && 1)
#define FFS(A) (A & (-A))
#define sqr(A) ((A) * (A))
using namespace std;
typedef long long ll;
typedef long double ld;
const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;

const int N = 1e4;
vector<int> v;
int i, k;

int f(int x) {
	int res = 0;
	while (x) {
		res += x % 10;
		x /= 10;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	while (v.size() < N) {
		i++;
		if (f(i) == 10)
			v.push_back(i);
	}
	cin >> k;
	cout << v[k - 1] << endl;
}
