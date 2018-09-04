#include <bits/stdc++.h>
using namespace std;
#define int __int64
#define ios ios_base::sync_with_stdio(NULL), cin.tie(0), cout.tie();
#define endl '\n'
#define pb push_back
const int MOD = (int)1e9 + 7;
const double YAR = 0.875;
const int MAXN = (int)1e7 + 1;

int a[MAXN];
int prime[MAXN];
int pref[MAXN];
int cnt[MAXN];

main() {
	ios;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	for (int i = 2; i <MAXN; i++) {
		if (!prime[i]) {
			for (int j = i; j < MAXN; j += i) {
				prime[j] = 1;
				pref[i] += cnt[j];
			}
		}
	}
	for (int i = 2; i < MAXN; i++) {
		pref[i] += pref[i - 1];
	}
	int q;
	cin >> q;
	for (int i = 1; i <= q; i++){
		int l, r;
		cin >> l >> r;
		l = min(l, MAXN-1);
		r = min(r, MAXN - 1);
		cout << pref[r] - pref[l - 1] << endl;
	}
} 