#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0; i < (n); i++)
#define MEM(a, x) memset(a, x, sizeof(a))
#define ALL(a) a.begin(), a.end()
#define UNIQUE(a) a.erase(unique(ALL(a)), a.end())
typedef long long ll;

int n, k;
bool f[1<<5];

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin >> n >> k;
	vector<vector<int> > v(n);
	FOR(i, n) {
		int a, x = 0;
		FOR(j, k) {
			cin >> a;
			x += a << j;
		}
		f[x] = true;
	}
	bool ok = false;
	FOR(i, 1<<k) {
		if (f[i]) {
			FOR(j, 1<<k) {
				if (f[j]) {
					bool flag = true;
					int x = i, y = j;
					FOR(c, k) {
						if (x & y) flag = false;
						x >>= 1;
						y >>= 1;
					}
					if (flag) ok = true;
				}
			}
		}
	}
	cout << (ok ? "YES" : "NO") << endl;
	return 0;
}