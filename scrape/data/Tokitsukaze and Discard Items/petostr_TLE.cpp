#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	
	long long n, k;
	long long m;
	cin >> n >> m >> k;
	vector<long long> p(m);
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	long long res = 1;
	long long sk = 0;
	long long cn = 0;
	bool g = true;
	long long curr = p[0] / k;
	long long start = 0;
	while (g) {
		bool first = true;
		for (int i = start; i < p.size(); i++) {
			if (p[i] - sk > curr * k) {
				if (i == start) {
					curr = max((p[i] / k) - 1ll, 0ll);
				}
				break;
			}
			first = false;
			cn++;
			start++;
		}
		if (start >= p.size()) {
			break;
		}
		curr++;
		if (!first) {
			res++;
			curr--;
		}
		sk = cn;
	}
	cout << res << '\n';

	return 0;
}