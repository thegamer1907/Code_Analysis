#include <bits/stdc++.h>

using namespace std;

#define debug(a) cout << #a << ": " << a << endl;

const int N = 1e6 + 10, M = 1e7 + 10;
int n, a[N];
int m, l, r;
int f[M], cnt[M];
bool isp[M];
vector<int> primes;
long long pref[M];

void sieve() {
	for (int i = 2; i <= M; i++) {
		if (isp[i]) continue;
		primes.push_back(i);
		for (int j = i; j <= M; j+=i) isp[j] = true, f[i]+=cnt[j];
	}
}

int main() {
	/*freopen("in", "r", stdin);
	freopen("out", "w", stdout);*/
	ios::sync_with_stdio(false);cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {int x; cin >> x; cnt[x]++;}
	sieve();
	for (int i = 1; i <= M-1; i++) pref[i]+=(pref[i-1]+f[i]);
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> l >> r;
		l = min(l, M-1); r = min(r, M-1);
		cout << pref[r]-pref[l-1] << endl;
	}

	return 0;
}