#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];
int u[10000001];
int pre[10000001];
int pref[10000001];
int a[1000001];

int main () {	
	int n;
	ios_base::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
	cin >> n;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
		cnt[a[i]] ++;
	}
	int q;
	cin >> q;
	for (int i = 2;i <= 1e7;i ++) {
		if (!u[i]) {
			for (int j = i;j <= 1e7;j += i) {
				pre[i] += cnt[j];
				u[j] = 1;
			} 
		}
	}
	for (int i = 1;i <= 1e7;i ++) {
		pref[i] = pref[i - 1] + pre[i];
	}
	while (q --) {
		int l, r;
		cin >> l >> r;
		if (l >= 1e7) l = 1e7;
		if (r >= 1e7) r = 1e7;
		cout << pref[r] - pref[l - 1] << endl;
	}
	return 0;
}