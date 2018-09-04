#include<bits/stdc++.h>
#include<ext/numeric>

using namespace std;
using namespace __gnu_cxx;

string s;
int nb, ns, nc, pb, ps, pc, rb, rs, rc;
long long R;

bool check(long long x) {
	long long totB = x * rb;
	long long totS = x * rs;
	long long totC = x * rc;

	long long reqB = max(0ll, totB - nb);
	long long reqS = max(0ll, totS - ns);
	long long reqC = max(0ll, totC - nc);

	long long totP = reqB * pb + reqS * ps + reqC * pc;
	return totP <= R;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
#endif
	cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> R;
	for (int i = 0; i < s.size(); ++i)
		if (s[i] == 'B')
			++rb;
		else if (s[i] == 'S')
			++rs;
		else
			++rc;

	long long l = 0, r = 1e13 + 5;
	while (l < r) {
		long long mid = (l + r + 1) / 2;
		if (check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
}
