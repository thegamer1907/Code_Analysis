#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <string>
#include <cassert>
#include <bitset>
#include <initializer_list>
#include <unordered_map>
#include <unordered_set>

using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> par;
int const INF = 1e9 + 7;
ll const LLINF = 1e18 + 7;
ld const eps = 1e-10;
ld const PI = acos(-1);
ll const PH = 257;
ll const mod = 1e9 + 7;

par operator + (par const& a, par const& b) {
	return{ a.first + b.first, a.second + b.second };
}
par operator - (par const& a, par const& b) {
	return{ a.first - b.first, a.second - b.second };
}
bool operator == (par const& a, par const& b) {
	return (a.first == b.first && a.second == b.second);
}
bool operator != (par const& a, par const& b) {
	return (a.first != b.first || a.second != b.second);
}
bool operator < (par const& a, par const& b) {
	return (a.first < b.first || (a.first == b.first && a.second < b.second));
}
bool operator > (par const& a, par const& b) {
	return (!(a < b || a == b));
}
istream& operator >> (istream& in, par & a) {
	return (in >> a.first >> a.second);
}
ostream& operator << (ostream& ou, par a) {
	return (ou << a.first << ' ' << a.second << '\n');
}

namespace std {
	template <>
	struct hash<par> {
		std::size_t operator ()(par const& a) const {
			using std::hash;
			using std::size_t;
			return size_t((1LL * hash<int>()(a.first) * PH + hash<int>()(a.second)) % mod);
		}
	};
}

inline ll randll() {
	ll res = rand();
	for (int i = 0; i < 3; i++) {
		res <<= 16;
		res += rand();
	}
	return res;
}

inline ld log(ld a, ld b) {
	return (log(b) / log(a));
}

int c[100100];
vector <int> g[100100];
int cnt;
bool used[100100];
int comp[100100];
int mn[100100];

void dfs(int v, int col) {
	used[v] = true;
	comp[v] = col;
	for (int to : g[v]) if (!used[to]) dfs(to, col);
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("useless.in", "r", stdin);
	//freopen("useless.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> c[i];
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for (int i = 0; i < n; i++) if (!used[i]) dfs(i, ++cnt);
	for (int i = 1; i <= cnt; i++) mn[i] = INF;
	for (int i = 0; i < n; i++) mn[comp[i]] = min(mn[comp[i]], c[i]);
	ll ans = 0;
	for (int i = 1; i <= cnt; i++) ans += mn[i];
	cout << ans;
	return 0;
}