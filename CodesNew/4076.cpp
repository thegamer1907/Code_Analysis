#include <bits/stdc++.h>
using namespace std;

#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define mp make_pair
#define f first
#define se second
#define pb push_back
#define ppb pop_back
#define ll long long
#define ull unsigned long long
#define cntbit(x) __builtin_popcount(x)
#define uset unordered_set
#define endl '\n'
#define umap unordered_map
#define pii pair <int, int>
#define ld long double

const int N = 2e5 + 5;
int n, m, a[N];
ll p[N];

int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		p[i] = p[i-1] + a[i];
	}
	int last = 0;
	ll left = 0, now = 0;
	for(int i = 1; i <= m; ++i) {
		ll x; cin >> x;
		now += x;
		int k = upper_bound(p+1, p+1+n, now) - p;
		if(k > n) {
			cout << n << endl;
			now = 0;
		}
		else
			cout << n - k + 1 << endl;
	}
	return 0;
}