#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0; i < (n); i++)
#define MEM(a, x) memset(a, x, sizeof(a))
#define ALL(a) a.begin(), a.end()
#define UNIQUE(a) a.erase(unique(ALL(a)), a.end())
typedef long long ll;

int a, b, c, t1, t2;
int x[3][2];
bool f12, f21;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin >> a >> b >> c >> t1 >> t2;
	if (t2 < t1) swap(t1, t2);
	if (t1 <= a && a < t2) f12 = true;
	else f21 = true;
	if (t1*5 <= b && b < t2*5) f12 = true;
	else f21 = true;
	if (t1*5 <= c && c < t2*5) f12 = true;
	else f21 = true;
	cout << (f12 && f21 ? "NO" : "YES") << endl;
	return 0;
}