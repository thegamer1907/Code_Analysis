/*
* Filename:    a.cpp
* Created:     Thursday, October 05, 2017 02:58:16 PM
* Author:      crazyX
* More:
*
*/
#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define clr(a,b) (memset(a,b,sizeof(a)))
#define y0 y3487465
#define y1 y8687969
#define fastio std::ios::sync_with_stdio(false)

using namespace std;

#if __cplusplus <= 199711L
	#warning The program needs at least a C++11 compliant compiler
#else
	template<typename T, typename... Args>
	T min(T value, Args... args) { return min(value, min(args...)); }

	template<typename T, typename... Args>
	T max(T value, Args... args) { return max(value, min(args...)); }
#endif

typedef long long ll;

const int INF = 1e9 + 7;
const int maxn = 1e2 + 7;

int n, m;
string a[maxn];
int main()
{
#ifdef AC
	freopen("data.in", "r", stdin);
	//freopen("data.out", "w", stdout);
#endif
	fastio; cin.tie(0);
	string pwd;
	cin >> pwd;
	cin >> n;
	for (int i = 0; i < n; i += 1) cin >> a[i];
	bool b1 = false, b2 = false;
	for (int i = 0; i < n; i += 1) {
		if (pwd == a[i]) {
			return 0 * puts("YES");
		}
		if (pwd[0] == a[i][1]) b1 = true;
		if (pwd[1] == a[i][0]) b2 = true;
	}
	if (b1 && b2) puts("YES");
	else puts("NO");
	return 0;
}