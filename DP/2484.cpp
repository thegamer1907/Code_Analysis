#define _CRT_SECURE_NO_WARNINGS

#include <vector>
#include <iostream>
#include <string>
#include <functional>
#include <set>
#include <map>
#include <unordered_map>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <queue>
#include <deque>
#include <math.h>
#include <cmath>
#include <stack>
#include <algorithm>
#include <list>
#include <array>
#include <valarray>
#include <unordered_map>
#include <cassert>
#include <random>
#include <cstring>
#include <bitset>

using namespace std;

typedef long double ld;
typedef long long li;
typedef vector<li> vec;
typedef vector<vector<li>> mt;
typedef pair<int, int> pii;

#define X first
#define Y second
#define all(a) a.begin(), a.end()
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define sz(a) int(a.size())

const double PI = 3.14159265358979323846;
const double EPS = 1e-15;
const int INF = 1e9 + 7;
const li LINF = 8e18 + 7;

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;

li d[N << 1], s[N << 1];

int main() {
#ifdef _DEBUG
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, k;
	cin >> t >> k;
	
	d[0] = 1;
	forn(i, N) {
		d[i + 1] = (d[i + 1] + d[i]) % MOD;
		d[i + k] = (d[i + k] + d[i]) % MOD;

		if (i > 0) {
			s[i] = s[i - 1];
		}

		s[i] = (s[i] + d[i]) % MOD;
	}


	forn(_, t) {
		int a, b;
		cin >> a >> b;
		a--;

		cout << (s[b] - s[a] + MOD) % MOD << endl;
	}
}