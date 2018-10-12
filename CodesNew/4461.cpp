#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define clr(t, val) memset(t, val, sizeof(t))

#define all(v)  v.begin() , v.end()
#define SZ(v) ((int)(v).size())

typedef long long Long;
typedef vector<int> vInt;
typedef vector<vInt> vvInt;
typedef vector<string> vStr;
typedef pair<int, int> Pair;
typedef pair<Long, Long> PairLong;
typedef vector<Pair> vPair;
typedef vector<PairLong> vPairLong;

void solve(string &a, string &b) {
	int pos = -1;
	REP (i, min(SZ(a), SZ(b))) {
		if (a[i] != b[i]) {
			pos = i;
			break;
		}
	}
	if (pos != -1) {
		if (a[pos] < b[pos]) {
			return;
		}
		a = a.substr(0, pos);
		return;
	} else {
		if (SZ(a) <= SZ(b)) {
			return;
		} else {
			a = b;
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	int n;
	while (cin >> n) {
		vStr dict(n);
		REP (i, n) {
			cin >> dict[i];
		}
		for (int i = n - 2; i >= 0; i--) {
			solve(dict[i], dict[i + 1]);
		}
		REP (i, n) {
			cout << dict[i] << '\n';
		}
	}
}
