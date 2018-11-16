#include <bits/stdc++.h>
using namespace std;

using f64 = double;

string s1, s2;
int p1, p2, qm;

int main() {
#ifdef HOME
	freopen("cf476b.in", "r", stdin);
	freopen("cf476b.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	f64 ant = 0;

	cin >> s1 >> s2;

	for (auto i: s1)
		p1+= (i == '+' ? +1 : -1);
	for (auto i: s2)
		if (i == '?')
			qm+= 1;
		else
			p2+= (i == '+' ? +1 : -1);

	if (qm == 0) {
		cout << setprecision(9) << fixed;
		cout << f64(p1 == p2) << endl;
		return 0; }

	for (int i = 0; i < (1 << qm); ++i) {
		int t = p2;
		for (int j = 0; j < qm; ++j)
			t+= ((1 << j) & i) ? 1 : -1;
		if (t == p1)
			ant+= 1.0 / (1 << qm); }

	cout << setprecision(9) << fixed;
	cout << ant << endl;

	return 0; }

