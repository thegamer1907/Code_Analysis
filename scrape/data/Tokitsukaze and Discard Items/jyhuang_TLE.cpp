// C. Tokitsukaze and Discard Items
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
	ios::sync_with_stdio(false); cin.tie(0);

	long long n, m, k;
	cin >> n >> m >> k;
	vector<long long> a(m);
	for (int i = 0; i < m; i++) cin >> a[i];
	sort(a.begin(), a.end());

	long long ans = 0;
	for (long long r = m, l = k, c = 0; c < m; ) {
		vector<long long>::iterator it;
		for ( ; ; ) {
			it = upper_bound(a.begin(), a.end(), l);
			if (it - a.begin() == c) l += k;
			else break;
		}
		long long d = it - a.begin() - c;
		l += d;
		c = it - a.begin();
		ans++;
	}

	cout << ans << endl;
	return 0;
}