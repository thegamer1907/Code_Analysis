#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cstdio>

//#include <cstdint>
//#include <cstdlib>
#include <cassert>
//#include <cctype>
#include <climits>
#include <functional>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <ctime>

#include <string>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <array>

using namespace std;

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define forn1(i, n) for(int i = 1; i <= int(n); i++)
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define mp make_pair
#define pb push_back
#define x first
#define y second

typedef long long li;
typedef long double ld;
typedef pair<int, int> pt;

const int INF = int(1e9);
const li INF64 = li(1e18);
const ld PI = acosl(ld(-1));
const ld EPS = 1e-9;

template <typename T> inline T sqr(const T& x) {
	return x * x;
}

template <typename T> inline T abs(const T& x) {
	return x > 0 ? x : -x;
}

inline bool inside(int x, int y, int n, int m) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

inline int rnd() {
	return abs(rand() ^ (rand() << 15));
}

inline int rnd(int n) {
	assert(n > 0);
	return rnd() % n;
}

inline int rnd(int lf, int rg) {
	return lf + rnd(rg - lf + 1);
}

inline li rndLL() {
	return rnd() * 1LL * rnd() + rnd();
}

const int dx[4] = { -1, 0, +1, 0 };
const int dy[4] = { 0, +1, 0, -1 };

const int dx8[8] = { -1, -1, 0, +1, +1, +1, 0, -1 };
const int dy8[8] = { 0, +1, +1, +1, 0, -1, -1, -1 };

const int N = int(2e5) + 555;

void gen() {

}

bool read() {
	return true;
}

inline void norm(int& x) {
	x = (x * 5) % 60;
}

inline void norm2(int& x) {
	if (x < 0) x = 119;
	if (x == 120) x = 0;
}

bool used[N];
bool bad[N];

void solve() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	norm(h);
	norm(t1);
	norm(t2);
	h *= 2;
	m *= 2;
	s *= 2;
	t1 *= 2;
	t2 *= 2;

	if (s != 0) {
		m++;
		norm2(m);
	}

	if (m != 0) {
		h++;
		norm2(h);
	}

	bad[h] = bad[m] = bad[s] = true;
	queue<int> q;
	assert(!bad[t1]);
	assert(!bad[t2]);
	q.push(t1);
	used[t1] = true;

	cerr << h << ' ' << m << ' ' << s << endl;
	cerr << t1 << ' ' << t2 << endl;

	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int dx = -1; dx <= 1; dx += 2) {
			int nx = v + dx;
			if (nx < 0) nx = 119;
			if (nx == 120) nx = 0;
			if (!bad[nx] && !used[nx]) {
				used[nx] = true;
				q.push(nx);
			}
		}
	}

	if (used[t2]) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
#ifdef _DEBUG
	assert(freopen("777.txt", "rt", stdin));
	assert(freopen("output.txt", "wt", stdout));
#endif

	cout << setprecision(10) << fixed;
	cerr << setprecision(10) << fixed;

	int T = 1;

	srand(int(time(NULL)));

	//assert(scanf("%d", &T) == 1);

	forn(i, T) {
#ifdef _DEBUG
		cerr << "TEST == " << i << endl;
#endif

		assert(read());
		//cout << "Case #" << i + 1 << ": ";
		solve();
		//if(i == 1) break;
		cerr << "curTime == " << clock() << " ms" << endl;
	}

#ifdef _DEBUG
	cerr << "TIME == " << clock() << " ms" << endl;
#endif
	return 0;
}