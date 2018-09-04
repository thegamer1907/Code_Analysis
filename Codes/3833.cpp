#include<bits/stdc++.h>
#include<ext/numeric>

using namespace std;
using namespace __gnu_cxx;

string s;
int nb, ns, nc, pb, ps, pc, rb, rs, rc;
long long r;

bool check(long long x) {
	long long totB = x * rb;
	long long totS = x * rs;
	long long totC = x * rc;

	long long reqB = max(0ll, totB - nb);
	long long reqS = max(0ll, totS - ns);
	long long reqC = max(0ll, totC - nc);

	long long totPrice = reqB * pb + reqS * ps + reqC * pc;
	return totPrice <= r;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	for (int i = 0; i < s.size(); ++i)
		if (s[i] == 'B')
			++rb;
		else if (s[i] == 'C')
			++rc;
		else
			++rs;
	long long L = 0, R = 1e14;
	while (L < R) {
		long long mid = (L + R + 1) / 2;
		if (check(mid))
			L = mid;
		else
			R = mid - 1;
	}
	cout << L;
}
