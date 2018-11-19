#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
const int N = 100 + 10, M = 60;
int place[N];
int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	t1 = (t1 * 5) % M;
	t2 = (t2 * 5) % M;
	h = (h * 5) % M;
	bool isH = ((m > 0 || s > 0) ? 0.1 : 0.0);
	bool isM = ((s > 0) ? 0.1 : 0.0);

	place[h] = 1;
	place[m] = 1;
	place[s] = 1;
	bool ok = true;
	for (int i = t1; i != t2; i = (i + 1) % M) {
		int nI = i + 1;
		if (i <= s && s <= nI) {
			ok = false;
			break;
		}
		if (i <= m + (isM ? 0.1 : 0.0) && m + (isM ? 0.1 : 0.0) <= nI) {
			ok = false;
			break;
		}
		if (i <= h + (isH ? 0.1 : 0.0) && h + (isH ? 0.1 : 0.0) <= nI) {
			ok = false;
			break;
		}
	}
	if (ok) return puts("YES");
	ok = true;
	for (int i = t1 % M; i != t2; i = (i - 1 + M) % M) {
		int nI = i - 1;
		if (nI <= s && s <= i) {
			ok = false;
			break;
		}
		if (nI <= m + (isM ? 0.1 : 0.0) && m + (isM ? 0.1 : 0.0) <= i) {
			ok = false;
			break;
		}
		if (nI <= h + (isH ? 0.1 : 0.0) && h + (isH ? 0.1 : 0.0) <= i) {
			ok = false;
			break;
		}
	}
	if (ok) return puts("YES");

	puts("NO");


	return 0;
}