#include <bits/stdc++.h>

using namespace std;

int used[10000001];
int lp[10000001];
vector <int> pr;
int a[1000001];

int main () {
	ios_base::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	for (int i = 2;i <= 1e7;i ++) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back (i);
		}
		for (int j = 0;j < pr.size () && pr[j] <= lp[i] && i * pr[j] <= 1e7;j ++) {
			lp[i * pr[j]] = pr[j];
		}
	}
	for (int i = 1;i <= n;i ++) {
		int x = a[i];
		int last = 1;
		while (x != 1) {
			if (lp[x] == last) {
				x /= lp[x];
				continue;
			}
			used[lp[x]] ++;
			last = lp[x];
			x /= lp[x];
		}
	}
	for (int i = 1;i <= 1e7;i ++) used[i] = used[i - 1] + used[i];
	int q;
	cin >> q;
	while (q --) {
		int l, r;
		cin >> l >> r;
		l = min (l, 10000000);
		r = min (r, 10000000);
		cout << used[r] - used[l - 1] << endl;	
	}
	return 0;
}