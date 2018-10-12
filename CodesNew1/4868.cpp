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
typedef vector<vStr> vvStr;
typedef pair<int, int> Pair;
typedef pair<Long, Long> PairLong;
typedef vector<Pair> vPair;
typedef vector<vPair> vvPair;
typedef vector<PairLong> vPairLong;
typedef vector<Long> vLong;
typedef tuple<int, int, int> Tuple;
typedef long double LongDouble;

bool canForm(int len, string &text, string &pattern, vInt &perm) {
	vInt vis(SZ(text));
	REP (i, len) {
		vis[perm[i]] = true;
	}
	int ptr = 0;
	REP (i, SZ(text)) {
		if (!vis[i]) {
			if (ptr == SZ(pattern)) {
				break;
			}
			if (text[i] == pattern[ptr]) {
				ptr ++;
			}
		}
	}
	return ptr == SZ(pattern);
}

int main() {
	ios_base :: sync_with_stdio(false);
	string text, pattern;
	while (cin >> text >> pattern) {
		vInt perm(SZ(text));
		REP (i, SZ(text)) {
			cin >> perm[i];
			perm[i] --;
		}
		
		int lo = 0, hi = SZ(text);
		while (hi - lo > 1) {
			int med = (lo + hi) >> 1;
			if (canForm(med, text, pattern, perm)) {
				lo = med;
			} else {
				hi = med;
			}
		}
		cout << lo << '\n';
	}
}

