#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 10000005;
int a[MAXN];
int d[MAXN];
int f[MAXN];
void sieve() {
	int num = 2;
	while (num < MAXN) {
		for (int i = num; i < MAXN; i+= num)
			d[i] = num;
		bool c = false;
		for (int i = num + 1; i < MAXN; i++)
			if (!d[i]) {
				c = true;
				num = i;
				break;
			}
		if (!c)
			break;
	}
}
void decom(int num) {
	while (num != 1) {
		f[d[num]]++;
		int k = d[num];
		while (num != 1 && num % k == 0)
			num /= k;
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	sieve();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		decom(a[i]);
	}
	int sum[MAXN];
	int cur = 0;
	for (int i = 0; i < MAXN; i++) {
		cur += f[i];
		sum[i] = cur;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		ll l, r;
		cin >> l >> r;
		r = min(r, (ll)MAXN - 1);
		l = min(l, (ll)MAXN - 1);
		cout << sum[r] - sum[l - 1] << "\n";
	}

}
