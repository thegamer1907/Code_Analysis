#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include<bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;
const double EPS = 1e-9;
const int PI = M_PI;
const int E = M_E;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vint;
typedef vector<double> vd;
typedef vector<bool> vbool;
typedef vector<vector<int>> vvint;
typedef vector<ll> vll;

#define make_pair(a,b) mp(a,b)
#define all(a) a.begin(), a.end()
#define error exit(1)
#define sz(a) a.size()
#define DEBUG


int main() {
	int h = 0, m = 0, s = 0, t1 = 0, t2 = 0;
	double hd = 0, md = 0, sd = 0, t1d = 0, t2d = 0;
	cin >> h >> m >> s >> t1 >> t2;
	sd = fmod((s * 6), 360);
	md = fmod((m * 6 + sd / 60), 360);
	hd = fmod((h * 30 + md / 12), 360);
	t1d = fmod((t1 * 30), 360);
	t2d = fmod((t2 * 30), 360);
	int ans = 0;
	if (t1d > t2d)
		swap(t1d, t2d);
	if ((!((t1d <= sd) && (t2d >= sd))) && (!((t1d <= md) && (t2d >= md))) && (!((t1d <= hd) && (t2d >= hd)))) {
		cout << "YES";
		return 0;
	}
	t1d += 360;
	if ((!((t2d <= sd) && (t1d >= sd))) && (!((t2d <= md) && (t1d >= md))) && (!((t2d <= hd) && (t1d >= hd)))) {
		ans++;
	}
	sd += 360;
	md += 360;
	hd += 360;
	if ((!((t2d <= sd) && (t1d >= sd))) && (!((t2d <= md) && (t1d >= md))) && (!((t2d <= hd) && (t1d >= hd)))) {
		if (ans == 1)
			cout << "YES";
		else
			cout << "NO";
		return 0;
	}
	cout << "NO";
	return 0;
}

