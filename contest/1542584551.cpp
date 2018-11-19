/*
* Filename:    B2.cpp
* Created:     Thursday, October 05, 2017 03:42:08 PM
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
const int maxn = 1e3 + 7;

int h, m, s, t1, t2, v[3];
bool in(int x, int y, int z) {
	return x > y && x < z;
}

int main()
{
#ifdef AC
	freopen("data.in", "r", stdin);
	//freopen("data.out", "w", stdout);
#endif
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	int mul = 120;
	int tol = 360 * mul;
	h %= 12; t1 %= 12; t2 %= 12;
	int p1 = 30 * t1 * mul , p2 = 30 * t2 * mul;
	int sec = m * 60 + s;
	v[0] = 30 * h * mul + sec;
	v[1] = sec * 12;
	v[2] = sec * 720;
	for (int i = 0; i < 3; i += 1) v[i] %= tol;
	sort(v, v + 3);
	for (int i = 0; i < 2; i += 1) {
		if (in(p1, v[i], v[i + 1]) && in(p2, v[i], v[i + 1]))
			return 0 * puts("YES");
	}
	if ((p1 > v[2] || p1 < v[0]) && (p2 > v[2] || p2 < v[0]))
		return 0 * puts("YES");
	puts("NO");
	return 0;
}