#include "bits/stdc++.h"

using namespace std;

#define debug(args...) fprintf(stderr, args)

#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = a; i >= b; i--)

#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef pair<int, int> pii;

const int maxn = 1e2 + 10;

string s;

int n;
string w[maxn];

bool solve() {
	FOR(i, 1, n) if(s == w[i]) return true;

	FOR(i, 1, n)
		FOR(j, 1, n)
			if(w[i][1] == s[0] && w[j][0] == s[1])
				return true;

	return false;
}

int main() {
	cin.sync_with_stdio(false);

	cin >> s >> n;

	FOR(i, 1, n) cin >> w[i];

	if(solve()) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}
