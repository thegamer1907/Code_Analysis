#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector <int> vi;
typedef pair <int, int> pii;

#define forft(i, from, to) for (int i = from; i < to; ++i)
#define forn(n) forft(i, 0, n)
#define fors(x) for (auto it = x.begin(); it != x.end(); ++it)
#define make1(type, x) type x; cin >> x
#define make2(type, x, y) type x, y; cin >> x >> y
#define make3(type, x, y, z) type x, y, z; cin >> x >> y >> z
#define make4(type, x, y, z, k) type x, y, z, k; cin >> x >> y >> z >> k
#define dbg1(x) cerr << #x << " = " << x << endl;
#define dbg2(x, y) cerr << #x << " = " << x << endl << #y << " = " << y << endl
#define dbg3(x, y, z) cerr << #x << " = " << x << endl << #y << " = " << y << endl << #z << " = " << z << endl
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()
#define readv(name, size, type) vector <type> name(size); forn(size) cin >> name[i]
#define printv(x, size) forn(sz(x)) cout << x[i] << sym

inline void solve() {
	make1(string, s);
	make1(int, m);
	set <char> a, b;
	while (m--) {
		make2(char, aa, bb);
		if (aa == s[0] && bb == s[1]) {
			puts("YES");
			return;
		}
		a.insert(aa);
		b.insert(bb);
	}
	if (a.count(s[1]) && b.count(s[0])) {
		puts("YES");
		return;
	}
	puts("NO");
}

int main() {
#ifdef HOME
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	printf("Case #1:\n");
	solve(); 
	int c = 2;
	while (!cin.eof()) {
		string s;
		do getline(cin, s);
		while (!cin.eof() && !s.empty() && s != "#");
		if (cin.eof()) return 0;
		printf("\n\n\n");
		printf("Case #%d:\n", c++);
		solve();
	}
#else
	ios_base::sync_with_stdio(false);
	solve();
#endif
	return 0;
}